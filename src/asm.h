
#define PROC_V          "/proc/version"
//#define BOOT_PATH       "/boot/System.map-"
#define KALLSYMS        "/proc/kallsyms"

#define MAX_LEN         (256)
#define SYSCALL_MAX     (310)

#define LANDING_SYSCALL(x) \
    __asm__ __volatile__ (\
    "nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
    "push %0\n\t"\
    "lea presyscall_hook, %%rax\n\t"\
    "add $33, %%rax\n\t"\
    "jmp *%%rax\n\t"\
    :\
    :"i"(x)\
    :\
    );
#define LANDING_BOARD\
    LANDING_SYSCALL(0)\
    LANDING_SYSCALL(1)\
    LANDING_SYSCALL(2)\
    LANDING_SYSCALL(3)\
    LANDING_SYSCALL(4)\
    LANDING_SYSCALL(5)\
    LANDING_SYSCALL(6)\
    LANDING_SYSCALL(7)\
    LANDING_SYSCALL(8)\
    LANDING_SYSCALL(9)\
    LANDING_SYSCALL(10)\
    LANDING_SYSCALL(11)\
    LANDING_SYSCALL(12)\
    LANDING_SYSCALL(13)\
    LANDING_SYSCALL(14)\
    LANDING_SYSCALL(15)\
    LANDING_SYSCALL(16)\
    LANDING_SYSCALL(17)\
    LANDING_SYSCALL(18)\
    LANDING_SYSCALL(19)\
    LANDING_SYSCALL(20)\
    LANDING_SYSCALL(21)\
    LANDING_SYSCALL(22)\
    LANDING_SYSCALL(23)\
    LANDING_SYSCALL(24)\
    LANDING_SYSCALL(25)\
    LANDING_SYSCALL(26)\
    LANDING_SYSCALL(27)\
    LANDING_SYSCALL(28)\
    LANDING_SYSCALL(29)\
    LANDING_SYSCALL(30)\
    LANDING_SYSCALL(31)\
    LANDING_SYSCALL(32)\
    LANDING_SYSCALL(33)\
    LANDING_SYSCALL(34)\
    LANDING_SYSCALL(35)\
    LANDING_SYSCALL(36)\
    LANDING_SYSCALL(37)\
    LANDING_SYSCALL(38)\
    LANDING_SYSCALL(39)\
    LANDING_SYSCALL(40)\
    LANDING_SYSCALL(41)\
    LANDING_SYSCALL(42)\
    LANDING_SYSCALL(43)\
    LANDING_SYSCALL(44)\
    LANDING_SYSCALL(45)\
    LANDING_SYSCALL(46)\
    LANDING_SYSCALL(47)\
    LANDING_SYSCALL(48)\
    LANDING_SYSCALL(49)\
    LANDING_SYSCALL(50)\
    LANDING_SYSCALL(51)\
    LANDING_SYSCALL(52)\
    LANDING_SYSCALL(53)\
    LANDING_SYSCALL(54)\
    LANDING_SYSCALL(55)\
    LANDING_SYSCALL(56)\
    LANDING_SYSCALL(57)\
    LANDING_SYSCALL(58)\
    LANDING_SYSCALL(59)\
    LANDING_SYSCALL(60)\
    LANDING_SYSCALL(61)\
    LANDING_SYSCALL(62)\
    LANDING_SYSCALL(63)\
    LANDING_SYSCALL(64)\
    LANDING_SYSCALL(65)\
    LANDING_SYSCALL(66)\
    LANDING_SYSCALL(67)\
    LANDING_SYSCALL(68)\
    LANDING_SYSCALL(69)\
    LANDING_SYSCALL(70)\
    LANDING_SYSCALL(71)\
    LANDING_SYSCALL(72)\
    LANDING_SYSCALL(73)\
    LANDING_SYSCALL(74)\
    LANDING_SYSCALL(75)\
    LANDING_SYSCALL(76)\
    LANDING_SYSCALL(77)\
    LANDING_SYSCALL(78)\
    LANDING_SYSCALL(79)\
    LANDING_SYSCALL(80)\
    LANDING_SYSCALL(81)\
    LANDING_SYSCALL(82)\
    LANDING_SYSCALL(83)\
    LANDING_SYSCALL(84)\
    LANDING_SYSCALL(85)\
    LANDING_SYSCALL(86)\
    LANDING_SYSCALL(87)\
    LANDING_SYSCALL(88)\
    LANDING_SYSCALL(89)\
    LANDING_SYSCALL(90)\
    LANDING_SYSCALL(91)\
    LANDING_SYSCALL(92)\
    LANDING_SYSCALL(93)\
    LANDING_SYSCALL(94)\
    LANDING_SYSCALL(95)\
    LANDING_SYSCALL(96)\
    LANDING_SYSCALL(97)\
    LANDING_SYSCALL(98)\
    LANDING_SYSCALL(99)\
    LANDING_SYSCALL(100)\
    LANDING_SYSCALL(101)\
    LANDING_SYSCALL(102)\
    LANDING_SYSCALL(103)\
    LANDING_SYSCALL(104)\
    LANDING_SYSCALL(105)\
    LANDING_SYSCALL(106)\
    LANDING_SYSCALL(107)\
    LANDING_SYSCALL(108)\
    LANDING_SYSCALL(109)\
    LANDING_SYSCALL(110)\
    LANDING_SYSCALL(111)\
    LANDING_SYSCALL(112)\
    LANDING_SYSCALL(113)\
    LANDING_SYSCALL(114)\
    LANDING_SYSCALL(115)\
    LANDING_SYSCALL(116)\
    LANDING_SYSCALL(117)\
    LANDING_SYSCALL(118)\
    LANDING_SYSCALL(119)\
    LANDING_SYSCALL(120)\
    LANDING_SYSCALL(121)\
    LANDING_SYSCALL(122)\
    LANDING_SYSCALL(123)\
    LANDING_SYSCALL(124)\
    LANDING_SYSCALL(125)\
    LANDING_SYSCALL(126)\
    LANDING_SYSCALL(127)\
    LANDING_SYSCALL(128)\
    LANDING_SYSCALL(129)\
    LANDING_SYSCALL(130)\
    LANDING_SYSCALL(131)\
    LANDING_SYSCALL(132)\
    LANDING_SYSCALL(133)\
    LANDING_SYSCALL(134)\
    LANDING_SYSCALL(135)\
    LANDING_SYSCALL(136)\
    LANDING_SYSCALL(137)\
    LANDING_SYSCALL(138)\
    LANDING_SYSCALL(139)\
    LANDING_SYSCALL(140)\
    LANDING_SYSCALL(141)\
    LANDING_SYSCALL(142)\
    LANDING_SYSCALL(143)\
    LANDING_SYSCALL(144)\
    LANDING_SYSCALL(145)\
    LANDING_SYSCALL(146)\
    LANDING_SYSCALL(147)\
    LANDING_SYSCALL(148)\
    LANDING_SYSCALL(149)\
    LANDING_SYSCALL(150)\
    LANDING_SYSCALL(151)\
    LANDING_SYSCALL(152)\
    LANDING_SYSCALL(153)\
    LANDING_SYSCALL(154)\
    LANDING_SYSCALL(155)\
    LANDING_SYSCALL(156)\
    LANDING_SYSCALL(157)\
    LANDING_SYSCALL(158)\
    LANDING_SYSCALL(159)\
    LANDING_SYSCALL(160)\
    LANDING_SYSCALL(161)\
    LANDING_SYSCALL(162)\
    LANDING_SYSCALL(163)\
    LANDING_SYSCALL(164)\
    LANDING_SYSCALL(165)\
    LANDING_SYSCALL(166)\
    LANDING_SYSCALL(167)\
    LANDING_SYSCALL(168)\
    LANDING_SYSCALL(169)\
    LANDING_SYSCALL(170)\
    LANDING_SYSCALL(171)\
    LANDING_SYSCALL(172)\
    LANDING_SYSCALL(173)\
    LANDING_SYSCALL(174)\
    LANDING_SYSCALL(175)\
    LANDING_SYSCALL(176)\
    LANDING_SYSCALL(177)\
    LANDING_SYSCALL(178)\
    LANDING_SYSCALL(179)\
    LANDING_SYSCALL(180)\
    LANDING_SYSCALL(181)\
    LANDING_SYSCALL(182)\
    LANDING_SYSCALL(183)\
    LANDING_SYSCALL(184)\
    LANDING_SYSCALL(185)\
    LANDING_SYSCALL(186)\
    LANDING_SYSCALL(187)\
    LANDING_SYSCALL(188)\
    LANDING_SYSCALL(189)\
    LANDING_SYSCALL(190)\
    LANDING_SYSCALL(191)\
    LANDING_SYSCALL(192)\
    LANDING_SYSCALL(193)\
    LANDING_SYSCALL(194)\
    LANDING_SYSCALL(195)\
    LANDING_SYSCALL(196)\
    LANDING_SYSCALL(197)\
    LANDING_SYSCALL(198)\
    LANDING_SYSCALL(199)\
    LANDING_SYSCALL(200)\
    LANDING_SYSCALL(201)\
    LANDING_SYSCALL(202)\
    LANDING_SYSCALL(203)\
    LANDING_SYSCALL(204)\
    LANDING_SYSCALL(205)\
    LANDING_SYSCALL(206)\
    LANDING_SYSCALL(207)\
    LANDING_SYSCALL(208)\
    LANDING_SYSCALL(209)\
    LANDING_SYSCALL(210)\
    LANDING_SYSCALL(211)\
    LANDING_SYSCALL(212)\
    LANDING_SYSCALL(213)\
    LANDING_SYSCALL(214)\
    LANDING_SYSCALL(215)\
    LANDING_SYSCALL(216)\
    LANDING_SYSCALL(217)\
    LANDING_SYSCALL(218)\
    LANDING_SYSCALL(219)\
    LANDING_SYSCALL(220)\
    LANDING_SYSCALL(221)\
    LANDING_SYSCALL(222)\
    LANDING_SYSCALL(223)\
    LANDING_SYSCALL(224)\
    LANDING_SYSCALL(225)\
    LANDING_SYSCALL(226)\
    LANDING_SYSCALL(227)\
    LANDING_SYSCALL(228)\
    LANDING_SYSCALL(229)\
    LANDING_SYSCALL(230)\
    LANDING_SYSCALL(231)\
    LANDING_SYSCALL(232)\
    LANDING_SYSCALL(233)\
    LANDING_SYSCALL(234)\
    LANDING_SYSCALL(235)\
    LANDING_SYSCALL(236)\
    LANDING_SYSCALL(237)\
    LANDING_SYSCALL(238)\
    LANDING_SYSCALL(239)\
    LANDING_SYSCALL(240)\
    LANDING_SYSCALL(241)\
    LANDING_SYSCALL(242)\
    LANDING_SYSCALL(243)\
    LANDING_SYSCALL(244)\
    LANDING_SYSCALL(245)\
    LANDING_SYSCALL(246)\
    LANDING_SYSCALL(247)\
    LANDING_SYSCALL(248)\
    LANDING_SYSCALL(249)\
    LANDING_SYSCALL(250)\
    LANDING_SYSCALL(251)\
    LANDING_SYSCALL(252)\
    LANDING_SYSCALL(253)\
    LANDING_SYSCALL(254)\
    LANDING_SYSCALL(255)\
    LANDING_SYSCALL(256)\
    LANDING_SYSCALL(257)\
    LANDING_SYSCALL(258)\
    LANDING_SYSCALL(259)\
    LANDING_SYSCALL(260)\
    LANDING_SYSCALL(261)\
    LANDING_SYSCALL(262)\
    LANDING_SYSCALL(263)\
    LANDING_SYSCALL(264)\
    LANDING_SYSCALL(265)\
    LANDING_SYSCALL(266)\
    LANDING_SYSCALL(267)\
    LANDING_SYSCALL(268)\
    LANDING_SYSCALL(269)\
    LANDING_SYSCALL(270)\
    LANDING_SYSCALL(271)\
    LANDING_SYSCALL(272)\
    LANDING_SYSCALL(273)\
    LANDING_SYSCALL(274)\
    LANDING_SYSCALL(275)\
    LANDING_SYSCALL(276)\
    LANDING_SYSCALL(277)\
    LANDING_SYSCALL(278)\
    LANDING_SYSCALL(279)\
    LANDING_SYSCALL(280)\
    LANDING_SYSCALL(281)\
    LANDING_SYSCALL(282)\
    LANDING_SYSCALL(283)\
    LANDING_SYSCALL(284)\
    LANDING_SYSCALL(285)\
    LANDING_SYSCALL(286)\
    LANDING_SYSCALL(287)\
    LANDING_SYSCALL(288)\
    LANDING_SYSCALL(289)\
    LANDING_SYSCALL(290)\
    LANDING_SYSCALL(291)\
    LANDING_SYSCALL(292)\
    LANDING_SYSCALL(293)\
    LANDING_SYSCALL(294)\
    LANDING_SYSCALL(295)\
    LANDING_SYSCALL(296)\
    LANDING_SYSCALL(297)\
    LANDING_SYSCALL(298)\
    LANDING_SYSCALL(299)\
    LANDING_SYSCALL(300)\
    LANDING_SYSCALL(301)\
    LANDING_SYSCALL(302)\
    LANDING_SYSCALL(303)\
    LANDING_SYSCALL(304)\
    LANDING_SYSCALL(305)\
    LANDING_SYSCALL(306)\
    LANDING_SYSCALL(307)\
    LANDING_SYSCALL(308)\
    LANDING_SYSCALL(309)\


#define HOOK_START_PRESYSCALL \
    __asm__ __volatile__ (\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
    "pop %%rax\n\t"\
    "push %%rbp\n\t"\
    "mov %%rsp, %%rbp\n\t"\
    "sub $0x40, %%rsp\n\t"\
    "mov %%rax,%0\n\t"\
    "mov 0x48(%%rsp),%%rax\n\t"\
    "mov %%rax,%1\n\t"\
    "lea postsyscall_hook, %%rax\n\t"\
    "add $11, %%rax\n\t"\
    "mov %%rax, 0x48(%%rsp)\n\t"\
    "push %%rbx\n\t"\
    "push %%rcx\n\t"\
    "push %%rdx\n\t"\
    "push %%rsi\n\t"\
    "push %%rdi\n\t"\
    "push %%r8\n\t"\
    "push %%r9\n\t"\
    "push %%r10\n\t"\
    "push %%r11\n\t"\
    "push %%r12\n\t"\
    "push %%r13\n\t"\
    "push %%r14\n\t"\
    "push %%r15\n\t"\
    : "=m"(syscall_num),"=m"(ret_addr)\
    );

#define HOOK_END_PRESYSCALL \
    syscall_addr=((void**)syscall_table_backup)[syscall_num];\
    __asm__ __volatile__ (\
    "pop %%r15\n\t"\
    "pop %%r14\n\t"\
    "pop %%r13\n\t"\
    "pop %%r12\n\t"\
    "pop %%r11\n\t"\
    "pop %%r10\n\t"\
    "pop %%r9\n\t"\
    "pop %%r8\n\t"\
    "pop %%rdi\n\t"\
    "pop %%rsi\n\t"\
    "pop %%rdx\n\t"\
    "pop %%rcx\n\t"\
    "pop %%rbx\n\t"\
    "xor %%rax, %%rax\n\t"\
    "mov %0, %%rax\n\t"\
    "mov %%rbp, %%rsp\n\t"\
    "pop %%rbp\n\t"\
    "jmp *%%rax\n\t"\
    :\
    :"m"(syscall_addr)\
    );
#define HOOK_START_POSTSYSCALL \
    __asm__ __volatile__ (\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
	"nop\n\t"\
    "push %rbp\n\t"\
    "push %rbp\n\t"\
    "mov %rsp, %rbp\n\t"\
    "sub $0x40, %rsp\n\t"\
    "push %rax\n\t"\
    "push %rbx\n\t"\
    "push %rcx\n\t"\
    "push %rdx\n\t"\
    "push %rsi\n\t"\
    "push %rdi\n\t"\
    "push %r8\n\t"\
    "push %r9\n\t"\
    "push %r10\n\t"\
    "push %r11\n\t"\
    "push %r12\n\t"\
    "push %r13\n\t"\
    "push %r14\n\t"\
    "push %r15\n\t"\
    );

#define HOOK_END_POSTSYSCALL \
    __asm__ __volatile__ (\
    "pop %%r15\n\t"\
    "pop %%r14\n\t"\
    "pop %%r13\n\t"\
    "pop %%r12\n\t"\
    "pop %%r11\n\t"\
    "pop %%r10\n\t"\
    "pop %%r9\n\t"\
    "pop %%r8\n\t"\
    "pop %%rdi\n\t"\
    "pop %%rsi\n\t"\
    "pop %%rdx\n\t"\
    "pop %%rcx\n\t"\
    "pop %%rbx\n\t"\
    "mov %0, %%rax\n\t"\
    "mov %%rax,0x50(%%rsp)\n\t"\
    "pop %%rax\n\t"\
    "mov %%rbp, %%rsp\n\t"\
    "pop %%rbp\n\t"\
    "ret\n\t"\
    :\
    :"m"(g_ret_addr[current->pid])\
    );
