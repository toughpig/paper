2014年公布的《国家集成电路产业发展推进纲要》就表明了国家对于集成电路产业发展的支持，这使得集成电路在近几年中成为了国家的战略产业。而作为一种特殊的集成电路，处理器芯片已经渗透到计算机、通信以及人们在生活所密切相关的所有行业中
郑永贵.  基于FPGA的32位RISC微处理器的设计与实现[D]. 河北工业大学,2012.

指令集架构（ISA，  Instruction Set Architecture）[2]是软硬件之
间至关重要接口，是处理器的灵魂。世界上第一块复杂指令集(CISC)微处理器芯片是
在上世纪 70 年代由 Intel  公司工程师霍夫研发出来的，这款芯片就是 X86 体系架构
芯片，标志了 Intel 公司成为芯片领域巨头的开始。摩尔定律推动芯片事业蒸蒸日上，
但是随着集成的指令集数量越来越多，硬件负荷增大，复杂指令系统无形中增加了功
耗和设计难度。针对这些弊端，David Patterson 提出了精简指令集（RISC）计算机结
构[2]
[2] 包云岗. 关于RISC-V成为印度国家指令集的一些看法[R].  中国计算机学会通讯，2018年第1期 

2010 年伯克利的科研团队公布了开源免费移植第五代 RISC 架构 RISC-V，RISC-
V 架构看重模块化和拓展性，并且有完备开源的软件堆栈，编译器，操作系统以及调
试器[4]。
[4] Harry  H.Porter. RISC-V:An Overview of the Instruction Set Architecture[R].Portland State University,2018. 

指令集体系结构（ISA）是硬件和软件之间的接口，是体系结构的主要部分[6]。加
州伯克利大学的研究团队设计和开发的这套全新的 RISC-V 开源指令集只有 50 条指
令，与传统指令集相比有更好的内部结构[7]。允许用户自己增加新指令，具有精简和
灵活的优势[8]。

[6]  来卫国. ARM 内核的中断技术[J].  单片机与嵌入式系统应用，  2002，   2(5):25-26. 
[7]  Silei L . Research on Open Source Processor and SoC Based on RISC-V[J]. microcontrollers & embedded systems, 2017. 
[8]  Gray J . GRVI Phalanx: A Massively Parallel RISC-V FPGA Accelerator[C]. IEEE International Symposium on Field-programmable Custom Computing Machines. IEEE, 2016. 

加利福尼亚大学伯克利分校发布了以 RISC-V 为基础，以硬件构造语言 Chisel 设计的全开放式硬件系统 Rocket[9]和 Boom[10]。

[9]  Asanović，  K.，  Avizienis，  R.，  Bachrach，  J.，  et al. The Rocket Chip Generator[R].EECS Department,University of California,Berkeley,Apr 2016. 
[10]  Celio,  Christopher,  Chiu,  Pi-Feng,  Asanovic,  Krste,  et  al.  BROOM:  An  Open-Source  Out-of-Order  Processor  With  Resilient  Low-Voltage  Operation  in  28-nm  CMOS[J].  IEEE  Micro, 39(2):52-60. 


进入 21 世纪以后，各国都在积极发展信息安全技术，同时由于知识经济以及
人工智能、全球互联时代的到来，集成电路产业在国民经济中发挥着越来越不可
替代的作用。集成电路产业从产生到如今的蓬勃发展，经历了设计制造的创新变
革、突破了一次又一次器件尺寸的限制，以其蓬勃的生命力与超强的渗透力推动
着电子信息产业的快速发展。我国的集成电路产业经过了几十年的发展，在某些
应用领域也取得了不错的成绩，但在高性能处理器以及芯片设计的关键技术中，
仍然面临着巨大的挑战。此外，我国的集成电路产业发展还承担着许多来自国际
的压力[1-3]。
[1]  胡振波.  手把手教你设计 CPU——RISC-V 处理器篇[M].  人民邮电出版社,2018; 
TP332.021/22 
[2]  胡振波. RISC-V 架构与嵌入式开发快速入门[M].  人民邮电出版社, 2019; TP332/204 
[3]  胡伟武.  计算机体系结构[M].  清华大学出版社.  机械工业出版社; 2017; TP303-43/100 

虽然近几年来我国的集成电路的出口量额程不断增长的态势，但该产
业在国际贸易中仍处于较大逆差的状态，在国际贸易的竞争中，不管是 2018 年中
美贸易战中“中兴事件”和“华为事件”的发生，还是其他大国对我国实行的禁
运政策，都让我国在市场竞争竞争中处于下风。我过对该产业的发展有着最真实
的、迫切的需求。历史的经历告诉我们，中国电子产业的整体发展必须要从中国
制造向中国创造转型，否则高度依赖于他国的设计必定会对国家经济带来严重影
响，如此以往将会成为我国国家安全的一大隐患。大力支持与发展我国的集成电
路产业发展，并最终实现集成电路产业带动其他产业的工业化、信息化，为其他
产业转型升级保驾护航，让我国在国际竞争中处于优势地位。

电子信息产品的核心就是 CPU 的芯片设计，它蕴含了众多的半导体技术，同
时拥有重要的战略意义，象征着国家实力，也代表着国家发展水平[4]。
[4]  朱子玉，李亚民. CPU 芯片逻辑设计技术[M].  清华大学出版社, 2005 [14] 

我国是世界上最大的发展中国家，为了持续提升本国的综合实力，就必
须提高创造自主知识产权的能力，而发展国产 CPU 是提高信息产业自主创新能力、
转变经济增长方式最佳切入点[5]。
[5]  李华伟，李晓维等.  可测试性设计在一款通用  CPU  芯片中的应用[J].  计算机工程与
应用, 2002,16:191-194.  

在 RISC-V 指令子集中，包括基础指令集和扩展指令集，在使用过
程中必须实现基础指令集，而作为 RISC-V 的基础指令集－RV32I，仅包含了 47
种指令、且每种指令的编码方式都非常统一、富有规律，简单明了的使用文档也
让许多初学者能快速上手[7,8]。
[7]  A  Waterman.  Y  Lee.  D  APatterson.  et  al.  The  RISC-V  Instruction  Set  Manul.  Volume  I: 
User-Level ISA [J].Eecs Department.2011.7(9):475. 
[8]  Andrew  Waterman,  Yunsup  Lee,  David  Patterson,  et  al.  The  RISC-V  Instruction  Set 
Manual, Volume I: User-Level ISA, Version 2.1[R]. California: EECS Department,   University of 
California, Berkeley, 2016. 1-121 


在集成度越来越高的今天，面对数千万乃至上亿晶体管的规模，那种“设计硬件原型-实现-评估-改进-再实现”的模式已经无法满足现代设计应用的需求[1]
[1] 金立忠，窦勇.  微处理器体系结构模拟器 SimpleScalar 分析与优化[J].  计算机应用研究, 2006, 8: 197-198. 

研究表明，如果在 CPU 的方案论证和设计阶段，没有及时发现问题与瓶颈，
将会使后续的工作变得更为困难且代价更加高昂[3]。因此，在开发一个新的体系结
构处理器时，为了确保处理器功能特性和性能参数达到设计的预期目标，对体系
结构进行验证是一个必不可少的步骤[4]
[3]  Neil  V,  Matthew  I,  Chinmay  A,  et  al.  Chip  Multi-Processor  Scalability  for 
Single-Threaded  Applications,  ACM  SIGARCH  Computer  Architecture  News, 
2005, 33(4): 44-53. 
[4]  何锐. GPGPU 多核流体系结构与功耗模拟研究[D].  国防科学技术大学, 2010.

体系结构模拟器是在宿主机（运行模拟器的机器）上运行并能模拟目标机（需
要模拟运行的机器）行为功能的软件[5]，因此又称之为软件模拟器。体系结构模拟
器具有运行速度快、模拟精度高、灵活性和可扩展性好的优点，因此受到了体系
结构研究者们的格外青睐。更有甚者，对大部分体系结构初学者来说，软件模拟
器是他们进行体系结构研究的唯一手段。国际上绝大部分的体系结构研究成果都
是基于模拟器平台做出的[6][7][8][9]，国外各大处理器设计公司也都有自己专用的模
拟器平台[10][11]，因此，软件模拟器是体系结构研究和微处理器设计的重要基础支撑平台。
[5]  濮晨,吴磊. CPU 模拟器研究综述[C]，江苏省计算机学会系统结构专委会学术
年会论文集, 2007: 124-132. 
[6]  Yi  J,  Eeckhout  L,  Lilja  D  et  al.  The  Future  of  Simulation:  A  Field  of  Dreams 
[J].Computer. 2006, 39(11): 22 -29.ustin T, Larson E, Ernst D. SimpleScalar: An 
Infrastructure for Computer System Modeling [J]. Computer. 2002, 35: 59–67. 
[7]  Burger  D,  Austin  T  M.  The  SimpleScalar  tool  set,  version  2.0  [J].  SIGARCH 
Comput. Archit. News. 1997, 25: 13-25. 
[8]  Martin  M  M  K,  Sorin  D  J,  Beckmann  B  M  et  al.  Multifacet’s  general 
execution-driven  multiprocessor  simulator  (GEMS)  tool  set  [J].  SIGARCH 
Comput. Archit. News. 2005, 33: 92-99. 
[9]  Binkert  N,  Dreslinski  R,  Hsu  L  et  al.  The  M5  Simulator:  Modeling  Networked 
Systems [J]. Micro, IEEE. 2006, 26(4): 52 -60. 
[10]  Bohrer  P,  Peterson  J,  Elnozahy  M  et  al.  Mambo:  a  full  system  simulator  for  the 
PowerPC architecture [J]. SIGMETRICS Perform. Eval. Rev. 2004, 31: 8-12. 
[11]  Emer  J,  Ahuja  P,  Borch  E  et  al.  Asim:  A  Performance  Model  Framework  [J]. 
Computer. 2002, 35: 68-76. 

体系结构模拟器根据模拟的详细程度可以分为功能模拟器（指令集模拟器 ISS，
Instruction  Set  Simulator）和性能模拟器（时钟周期精确模拟器）两类。前者只模
拟目标系统的指令集体系结构，比如寄存器状态、指令语义、存储器状态等功能
特性；后者除了模拟功能特性外，还模拟目标系统的微体系结构，比如流水线、
分支预测、Cache 层次等[13]
[13]  喻之斌,  金海,  邹南海.  计算机体系结构软件模拟技术[J].  软件学报，2008, 4: 
1051-1067. 
LSE（Liberty Simulation Environment）是由普林斯顿大学开发的用于计算机系
统建模的集成开发环境[15]，该开发环境主要用来对计算机系统的并行结构化部件
进行建模，然后自动生成模拟器，在模拟器的开发过程中可以最大限度地重用已
有的组件，从而达到降低开发成本和难度的目的。利用 LSE 开发模拟器的过程如
图 1.1 所示。 
[15]  M. Vachharajani, N. Vachharajani, D. A. Penry, et al. The Liberty Simulation Environment: 
A  Deliberate  Approach  to  High-Level  System  Modeling.  ACM  Transactions  on 
Computer Systems, 2006, 24 (3):211~249.

此外，比较著名的研究项目还有法国的嵌入式多体系结构模拟器 Qemu[24]、上海同济大学研制的 PEMU[25]以及浙江大学开发的 WuKong 系统[26]等。
[24]  Bellard.  The  QEMU  CPU  Emulator[EB/OL].  http://fabrice.bellard.free.fr/qemu/, 2004. 
[25]  Huang  Yichun.  ProEmulator  Plug-in  Developer's  Guide[EB/OL]. http://sourceforge.net/docman/, 2004. 
[26]  柯化成.  嵌入式系统全系统模拟器框架设计与实现[D].  杭州:浙江大学, 2006. 



踪迹驱动模拟将每条指令顺序执行所产生的所有信息作为模拟器的输入，从
而模拟某种体系结构处理器的功能和性能[30]
[30]  Belady L．A study ofreplacement algorithms for a virtual storage computer．IBM 
System Journal, 1966, 5(2): 78-101. 

解释型 ISS 最大的特点在于直接将硬件
行为映射到软件[31]
[31]  Dwarkadas S，Jump J．Execution-Driven simulation of mu1tipr0cess0rs：Address 
and timing analysis．ACM Trans．on Modeling and Computer Simulation，1994，
4(4): 314-338． 

IBM于2012年某研讨会中做了题为“IBM使用模拟器的经验”的报告[16]，对于IBM如何在处理器设计过程中使用模拟器进行了介绍．
在处理器早期设计研究期间，IBM使用 Mambo[17]
模拟器的时钟精确模式进行微结构探索和粗粒度微
结构定义．Mambo模拟器对微结构主要模块和结构
进行了模拟，该阶段 Mambo由踪迹（trace）驱动，主
要运行和研究用户态应用，对处理器的产品竞争力
进行横向比较研究 [16]．
在微结构设计实现期间，IBM使用基于公司内
部专用“Ｔ”语言编写的时钟精准模拟器M1进行详细模拟处理器微结构[16],如图3所示.M1是以Mambo模拟器或者硬件上抓取的踪迹作为输入，并且可以收集非常详细的微结构数据进行性能评估．
为了加速M1模拟器的执行速度，需要对所抓取的踪迹进行取样，同时为了方便调试，M1支持微结构性能数据可视化功能．

在处理器验证阶段，IBM使用 Mambo[17]作为处理器验证参考模型辅助进行验证，此阶段 Mambo
可以为处理器功能正确性提供参考结果．Mambo模拟了所有处理器的功能特征，把某些性能相关的微
结构维护操作（例如cache维护类指令）翻译成空（nop）操作，对于计算类指令产生准确的结果，并精
准追踪处理器寄存器的状态变化，同时支持指令撤销操作，为处理器验证提供参考．IBM基于Mambo模拟器曾发现PowerPC CPU的一个控制寄存器存在竞争条件，使得该设计错误在流片之前就被发现
并修改[17]．在该阶段，IBM还使用自研的由多个FPGA(field programmable gate array)组成的VHDL(very-high-speed integrated circuithardware description language)
仿真加速器Twinstar[18]进行
处理器综合验证．Twinstar是时钟精准的仿真加速器，其推进方式是事件驱动模式，可以对整个处理器芯片进行仿真，以二进制程序作为输入，还支持详细
的指令踪迹和处理器状态的实时追踪．该平台运行速度可以达到4MHz并可以运行未经修改的系统
软件．类似Twinstar的验证平台还有帕拉丁[19]等．
在系统软件开发方面，IBM基于 Mambo（加速模式）[17]，Simics[20]，BGLsim[21]等多种平台，在流片之前就开始进行固件、操作系统、虚拟机管理器等
软件的早期开发．IBM基于Mambo模拟器曾开发
了K42操作系统，在芯片可用之后１周内就启动了操作系统[17]．IBM基于BGLsim-multi[21]平台和基
于OMNeT++[22]开发的MARS(message passing interface application replay simulation)模拟平台还
可以对机群网络相关的功能进行模拟，模拟器由可执行程序或者踪迹驱动，其中MARS平台还可以对
MPI(message passing interface)类应用进行调优．

[16] Michael K. Experiences in simulation at IBM[EB/OL]. 2012. http://csa.cs.pitt.edu/presentations/csa2012_kistler-michael.pdf
[17] Bohrer P, peterson J, Elnozahy M, et al. Mambo: A full system simulator for the PowerPCarchitecture [J]. ACM SIGMETRICS Performance Evaluation Review, 2004. 31(4): 8-12
[18] Asaad S, Bellofatto R, Brezzo B, et al. A cycle-accurate, cycle-reproducible muti-FPGA system for accelerating multi-core processor simulation [C]//Proc of the ACM/SIGDA Int Symp on Field Programmable Gate Arrays. New York: ACM, 2012: 153-162
[19] Cadence. Palladium Z1 enterprise emulation platform datasheet [EB/OL]. [2019-01-23]. https://www/cadence.com/content/dam/cadence-www/global/en_US/documents/tools/system-design-verification/palladium-z1-ds.pdf
[20] Magnusson P S, Christensson M, Eskilson J, et al. Simics: A full system simulationplatform [J]. Computer, 2002, 35(2): 50-58
[21] Ceze L, Strauss K, Almasi G, et al. Full circle: Simulating Linux clusters on Linux clusters[C]//Proc of the 4th LCI Int Conf on LInux Clusters: The HPC Revolution. New York: ACM, 2003
[22] OpenSim Ltd. OMNeT++[EB/OL].[2019-01-23]. http://ispass.org/ispass2007/keynote2.pdf