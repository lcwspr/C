# system 函数
## system 函数基本使用
```
    #include<stdlib.h>
    int system(const char * command);
    功能: 在已经运行的程序中执行另外一个外部程序
    参数：外部可执行程序名字
    返回值
        成功：不同系统返回值不一样
        失败：通常返回-1
```
* C语言的所有库函数调用，只能保证语法是一致的，但是不能保证执行结果是一致地，同样的库函数在不同的操作系统下执行结果可能是一样的，也可能不一样。
* 在学习Linux发展史时，我们得知Linux的发展离不开POSIX规范，只要符合这个标准的函数，在不同系统下执行的结果就可以一致。
* unix和linux很多库函数都是支持POSIX的，但是Windows支持较差。所以unix代码移植到Linux比较容易，到unix或者linux就比较麻烦

## 使用WinExec
* 导入系统库windows.h输入WinExec("calc", SW_HIDE);  // 系统调用时默认隐藏黑窗口
* WinExec("SW_NORMAL");
