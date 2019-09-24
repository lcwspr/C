# 内存操作函数
## 存储类型总结内存操作函数
1. memset()
    * 头文件 `#include <string.h>`
    * 功能： 将s的内存区域前n个字节以参数c填入
    * 参数
        * s：需要操作内存s的首地址
        * c：填充的字符，c虽然参数为int,但必须是unsigned char，范围为0-255
        * n: 指定需要设置的大小，以字节为单位
    * 返回值
        * s的首地址

2. memcpy()
    * 头文件: `#include<string.h>`
    * 原型: `void memcpy(void *dest, const void * src, size_t n);`
    * 功能： 拷贝src所指的内存内容的前n个字节到dest所指的内存地址上。
    * 参数：
        * dest: 目的内存首地址
        * src： 源内存首地址，注意dest和src所指的内存空间不可重叠
        * n： 需要拷贝的字节数目
    * 返回值： dest的首地址
    * 例子
        ```
        int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int b[10];
        memcpy(b,a,sizeof(a));
        for(int i = 0; i< 10; i++)
        {
            printf("%d",b[i]);
        }
        // memcpy(&a[3],a, 5*sizeof(int));   // err,内存重叠
        ```
        * memcpy和strcpy的异同
            1. 函数参数不同
            2. strcpy拷贝字符串不同
            3. 拷贝结束标志不同，strcpy。 \0 memcpy,一个数为结尾

3. memmove()
    * 用法和功能和memcpy一样，但是，dest和src所指的内存空间重叠时，memmove()依然能够处理，不过执行效率比memcpy低一些
    * 相当于创建临时变量。

4. memcmp() 
    * 头文件： `#include <string.h>`
    * 原型： `int memcmp(const void * s1, const void * s2, size_t n);`
    * 功能： 比较s1和s2所指向的内存区域的前n个字节
    * 参数：
        * s1：内存首地址1
        * s2: 内存首地址2
        * n： 需要比较的前n个字节
    * 返回值
        * 相等 = 0
        * 大于 > 0
        * 小于 < 0
