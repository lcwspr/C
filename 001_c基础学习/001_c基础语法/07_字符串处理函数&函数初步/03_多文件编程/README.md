# 多文件编程
## 分文件编程
* 步骤
    1. 把函数声明放在头文件xxx.h中，在主函数中包含相应头文件
    2. 在头文件对应的xxx.c中实现xxx.h声明的函数
* 头文件作用
    1. 函数，变量声明
    2. 系统库的调用

## 避免文件重包含
1. 预处理指令
    ```
    #ifndef MY_HEAD_H_
    #define MY_HEAD_H_
    .....
    #endif
    ```
2. pragma
    ```
    #pragma once
    ```