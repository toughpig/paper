
typedef quint64 insn_bits_t;
class insn_t
{
public:
    insn_t() = default;
    insn_t(insn_bits_t bits) : b(bits) {}
    insn_bits_t bits() { return b; }
    int length() { return insn_length(b); }
    int64_t i_imm() { return int64_t(b) >> 20; }
    int64_t s_imm() { return x(7, 5) + (xs(25, 7) << 5); }
    int64_t sb_imm() { return (x(8, 4) << 1) + (x(25,6) << 5) + (x(7,1) << 11) + (imm_sign() << 12); }
    int64_t u_imm() { return int64_t(b) >> 12 << 12; }
    int64_t uj_imm() { return (x(21, 10) << 1) + (x(20, 1) << 11) + (x(12, 8) << 12) + (imm_sign() << 20); }
    quint64 rd() { return x(7, 5); }
    quint64 rs1() { return x(15, 5); }
    quint64 rs2() { return x(20, 5); }
    quint64 rs3() { return x(27, 5); }
    quint64 rm() { return x(12, 3); }
    quint64 csr() { return x(20, 12); }

    int64_t rvc_imm() { return x(2, 5) + (xs(12, 1) << 5); }
    int64_t rvc_zimm() { return x(2, 5) + (x(12, 1) << 5); }
    int64_t rvc_addi4spn_imm() { return (x(6, 1) << 2) + (x(5, 1) << 3) + (x(11, 2) << 4) + (x(7, 4) << 6); }
    int64_t rvc_addi16sp_imm() { return (x(6, 1) << 4) + (x(2, 1) << 5) + (x(5, 1) << 6) + (x(3, 2) << 7) + (xs(12, 1) << 9); }
    int64_t rvc_lwsp_imm() { return (x(4, 3) << 2) + (x(12, 1) << 5) + (x(2, 2) << 6); }
    int64_t rvc_ldsp_imm() { return (x(5, 2) << 3) + (x(12, 1) << 5) + (x(2, 3) << 6); }
    int64_t rvc_swsp_imm() { return (x(9, 4) << 2) + (x(7, 2) << 6); }
    int64_t rvc_sdsp_imm() { return (x(10, 3) << 3) + (x(7, 3) << 6); }
    int64_t rvc_lw_imm() { return (x(6, 1) << 2) + (x(10, 3) << 3) + (x(5, 1) << 6); }
    int64_t rvc_ld_imm() { return (x(10, 3) << 3) + (x(5, 2) << 6); }
    int64_t rvc_j_imm() { return (x(3, 3) << 1) + (x(11, 1) << 4) + (x(2, 1) << 5) + (x(7, 1) << 6) + (x(6, 1) << 7) + (x(9, 2) << 8) + (x(8, 1) << 10) + (xs(12, 1) << 11); }
    int64_t rvc_b_imm() { return (x(3, 2) << 1) + (x(10, 2) << 3) + (x(2, 1) << 5) + (x(5, 2) << 6) + (xs(12, 1) << 8); }
    int64_t rvc_simm3() { return x(10, 3); }
    quint64 rvc_rd() { return rd(); }
    quint64 rvc_rs1() { return rd(); }
    quint64 rvc_rs2() { return x(2, 5); }
    quint64 rvc_rs1s() { return 8 + x(7, 3); }
    quint64 rvc_rs2s() { return 8 + x(2, 3); }
private:
    insn_bits_t b;
    quint64 x(int lo, int len) { return (b >> lo) & ((insn_bits_t(1) << len)-1); }
    quint64 xs(int lo, int len) { return int64_t(b) << (64-lo-len) >> (64-len); }
    quint64 imm_sign() { return xs(63, 1); }
};



require_privilege(PRV_M);
set_pc(p->get_state().mepc);
reg_t s = STATE.mstatus;
reg_t prev_prv = get_field(s, MSTATUS_MPP);
s = set_field(s, MSTATUS_UIE << prev_prv, get_field(s, MSTATUS_MPIE));
s = set_field(s, MSTATUS_MPIE, 1);
s = set_field(s, MSTATUS_MPP, PRV_U);
p->set_privilege(prev_prv);
p->set_csr(CSR_MSTATUS, s);



case CSR_MSTATUS:
{
    if ((val ^ CSR.mstatus) & (MSTATUS_VM | MSTATUS_MPP | MSTATUS_MPRV | MSTATUS_PUM | MSTATUS_MXR))
        mmu->flush_tlb();
    
    reg_t mask = MSTATUS_SIE | MSTATUS_SPIE | MSTATUS_MIE | MSTATUS_MPIE
                | MSTATUS_SPP | MSTATUS_FS | MSTATUS_MPRV | MSTATUS_PUM
                | MSTATUS_MPP | MSTATUS_MXR ;

    if (validate_vm(max_xlen, get_field(val, MSTATUS_VM)))
        mask |= MSTATUS_VM;

    CSR.mstatus = (CSR.mstatus & ~mask) | (val & mask);

    bool dirty = (CSR.mstatus & MSTATUS_FS) == MSTATUS_FS;
    dirty |= (CSR.mstatus & MSTATUS_XS) == MSTATUS_XS;
    if (max_xlen == 32)
        CSR.mstatus = set_field(CSR.mstatus, MSTATUS32_SD, dirty);
    else
        CSR.mstatus = set_field(CSR.mstatus, MSTATUS64_SD, dirty);

    xlen = max_xlen;
    break;
}


#ifdef CONFIG_MMU
relocate:
	/* Relocate return address */
	li a1, PAGE_OFFSET
	la a2, _start
	sub a1, a1, a2
	add ra, ra, a1

	/* Point stvec to virtual address of intruction after satp write */
	la a2, 1f
	add a2, a2, a1
	csrw CSR_TVEC, a2

	/* Compute satp for kernel page tables, but don't load it yet */
	srl a2, a0, PAGE_SHIFT
	li a1, SATP_MODE
	or a2, a2, a1

	/*
	 * Load trampoline page directory, which will cause us to trap to
	 * stvec if VA != PA, or simply fall through if VA == PA.  We need a
	 * full fence here because setup_vm() just wrote these PTEs and we need
	 * to ensure the new translations are in use.
	 */
	la a0, trampoline_pg_dir
	srl a0, a0, PAGE_SHIFT
	or a0, a0, a1
	sfence.vma
	csrw sptbr, a0
.align 2
1:
	/* Set trap vector to spin forever to help debug */
	la a0, .Lsecondary_park
	csrw CSR_TVEC, a0

	/* Reload the global pointer */
.option push
.option norelax
	la gp, __global_pointer$
.option pop

	/*
	 * Switch to kernel page tables.  A full fence is necessary in order to
	 * avoid using the trampoline translations, which are only correct for
	 * the first superpage.  Fetching the fence is guarnteed to work
	 * because that first superpage is translated the same way.
	 */
	csrw sptbr, a2
	sfence.vma

	ret
#endif /* CONFIG_MMU */

template<class T>
inline T load(reg_t addr)
{
    if (addr & (sizeof(T)-1))
        throw trap_t(trap_load_address_misaligned,addr);
    reg_t vpn = addr >> PGSHIFT;
    if (likely(tlb_load_tag[vpn % TLB_ENTRIES] == vpn))
        return *(T*)(tlb_data[vpn % TLB_ENTRIES] + addr);
    T res;
    load_slow_path(addr, sizeof(T), (uint8_t*)&res);
    return res;
}

class bus_t : public abstract_device_t
{
public:
    bool load(reg_t addr, size_t len, uint8_t* bytes);
    bool store(reg_t addr, size_t len, const uint8_t* bytes);
    void add_device(reg_t addr, abstract_device_t* dev);
    void add_register(reg_t addr, abstract_device_t* dev,qint32 offset);

private:
    std::map<reg_t, abstract_device_t*> devices;
    struct device_reg
    {
        device_reg(){}
        device_reg(abstract_device_t *dev,qint32 offset):dev(dev),offset(offset){}
        abstract_device_t *dev;
        qint32 offset;
    };
    QMap<reg_t,device_reg> regs;
};

class trap_t
{
public:
    trap_t(){}
    trap_t(reg_t type):cause(type),addr_valid(false){}
    trap_t(reg_t type,quint64 addr):cause(type),addr_valid(true),addr(addr){}
    reg_t cause;
    bool addr_valid;
    quint64 addr;
    static QMap<reg_t,QString> names;
    static quint64 delegable_exceptions;
    QString &name(){return names[cause];}
};

enum sim_cmd
{
    sim_cmd_pause_sim,
    sim_cmd_run_sim,
    sim_cmd_run_sim_silently,
    sim_cmd_step_sim,
    sim_cmd_reset_sim,
    sim_cmd_access_memory,
    sim_cmd_set_breaks,
    sim_cmd_key_input,
    sim_cmd_mailbox_input
};

enum window_cmd
{
    window_cmd_update_reg,
    window_cmd_update_mem,
    window_cmd_sim_output,
    window_cmd_gst_output,
    window_cmd_pause_sim,
    window_cmd_update_mailbox
};


