# RISC-V 内核学习项目
这是一个用于学习 RISC-V 架构内核开发的简单教学项目，实现了基本的内存管理和串口输出功能。 main.c:8-18

功能特性
物理内存管理: 实现了基于链表的物理页面分配器 kalloc() kalloc.c:35-49
虚拟内存: 支持 RISC-V Sv39 三级页表结构，包含页表遍历 walk() 和页面映射 mappages() vm.c:18-69
串口通信: 通过 UART 实现字符输出功能 uart.c:4-18
编译和运行
# 编译内核  
make  
  
# 在 QEMU 中运行  
make qemu
项目使用 RISC-V 交叉编译工具链，生成 kernel.elf 可执行文件 Makefile:1-12 。

系统架构
内核启动后会初始化内存管理子系统 main.c:9-11 ，设置内核页表 vm.c:79-85 ，然后通过串口输出 "hello my first kernel" 消息 main.c:13 。

Notes   
该项目是一个教学性质的简化内核实现，主要用于学习 RISC-V 架构的内存管理机制。代码包含中文注释，适合初学者理解操作系统内核的基本概念。
