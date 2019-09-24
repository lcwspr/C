# IDE 配置
## Visual studio
* Microsoft Visual Studio（简称VS）是美国微软公司的开发工具包系列产品。VS是一个基本完整的开发工具集，它包括了整个软件生命周期中所需要的大部分工具，如UML工具、代码管控工具、集成开发环境(IDE)等等,所写的目标代码适用于微软支持的所有平台。Visual Studio是目前最流行的Windows平台应用程序的集成开发环境。
* 快捷键
    1. ctrl + k, ctrl + f
        * 自动格式代码
    2. ctrl + k, ctrl + c
        * 注释代码
    3. ctrl + k, ctrl + u
        * 取消注释
    4. f9
        * 断点
    5. f5
        * 调试运行
    6. ctrl + f5
        * 不调试执行
    7. ctrl + shift + b
        * 编译，不运行
    8. f10 
        * next调试
    9. f11
        * step
    10. alt + 上下
        * 移动代码
    11. ctrl + c, ctrl + v
        * 复制当前行
    12. tab
        * 选中提示
    13. ctrl + j
        * 智能提示
    14. alt + 右
        * 自动补全

## QT
* 快捷键
    * ctrl + i
        * 自动提示
    * ctrl + /
        * 注释，取消
    * alt + enter
        * 自动完成类函数定义
    * f4
        * .h和.cpp文件切换
    * f9
        * 断点
    * f5
        * 调试执行
    * CTRL + r
        * 编译，但不调试运行
* 文本提示
    * 工具-》选项-》环境-》TextEditor

## VS建议采用带_s的函数，如scanf_s、strcpy_s，但这些并不是标准C函数。
要想继续使用此函数，需要在源文件中添加以下指令就可以避免这个错误提示：
```
#define _CRT_SECURE_NO_WARNINGS     //这个宏定义最好要放到.c文件的第一行
#pragma warning(disable:4996)	//或者使用这个
```