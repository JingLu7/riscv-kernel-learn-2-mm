// 类型定义
typedef unsigned int uint;
typedef unsigned long uint64;
typedef uint64 pte_t;
typedef uint64* pagetable_t;

// 常量
#define KERNBASE 0x80000000
#define PHYSTOP (KERNBASE + 128*1024*1024)
#define PGSIZE 4096

// 工具宏
#define PGROUNDUP(sz) (((sz) + PGSIZE - 1) & ~(PGSIZE - 1))
#define PGROUNDDOWN(sz) ((sz) & ~(PGSIZE -1))
// // 硬件读取
// static inline uint64 r_tp(){
//     // 静态内联
//     uint64 x;
//     asm volatile("mv %0, tp": "=r" (x)); // asm声明后面为汇编 volatile告诉编译器不要优化
//     // 格式 asm volatile ( "汇编指令" : 输出操作数 : 输入操作数 : 破坏描述符 );
//     // "=r" (x)为输出操作数 格式为：[操作数修饰符] + [约束条件] + (C语言变量)
//     // “=” 只写标志 “r” 分配寄存器 （x）操作执行完后返回的c语言变量
//     return x;
// }

/* --- 权限位 (PTE Flags) --- */
#define PTE_V (1L << 0) // Valid: 该页表项是否有效
#define PTE_R (1L << 1) // Readable
#define PTE_W (1L << 2) // Writable
#define PTE_X (1L << 3) // Executable
#define PTE_U (1L << 4) // User: 是否允许用户态访问


