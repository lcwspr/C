# 其他的读写函数
## 按照行读写
1. fputs
    * 头文件： `#include <stdio.h>`
    * 函数原型： `int fputs(const char * str, FILE * stream);`
    * 功能： 将str所指定的字符串写入到stream指定的文件中，字符串结束符\0不写入文件
    * 参数：
        * str： 字符串
        * stream: 文件指针
    * 返回值
        * 成功: 0,失败 -1

2. 读文件
    * 头文件： `#include <stdio.h>`
    * 原型: `char * fgets(char * str, int size, FILE * stream);`
    * 功能: 从stream指定的文件内读入字符，保存到str所指定的内存空间，直到出现换行符，都入到文件结尾或者是已经都去了size-1个字符为止，最后会自动加上字符串\0作为字符串结束标记。
    * 参数
        * str： 字符串
        * size: 指定最大读取字符串的长度(size - 1)
        * stream: 文件指针
    * 返回值
        * 成功: 成功读取的字符串
        * 读到文件结尾或者出错，NULL

3. 例子
    ```
    char * buf = malloc(sizeof(char)*1024);
    // feof判断文件流是否到达结尾 EOF判断字符是否到结尾
    
    fgets(buf,1024,fp);
    while(feof(fp)==0)
    {
        memset(buf,0,1024);
        fgets(buf,1024,fp);
        printf("%s",buf);
    }
    ```

## 按照格式化文件 fprintf,fscanf
1. 写文件
    * 头文件： `#include <stdio.h>`
    * 原型: `int fprintf(FILE * stream, const char * format,..);`
    * 功能
        * 根据参数format字符串来转换并格式化数据，然后将结构输出到Stream指定的文件中，指定出现字符串结束符\0为止
    * 参数
        * stream: 已经打开的文件
        * format: 字符串格式，用法和和printf()一样
    * 返回值
        * 成功： 实际写入文件的字符个数
        * 失败： -1

2. 读文件
    * 头文件： `#include <stdio.h>`
    * 原型： `int fscanf(FILE * stream, const char * format);`
    * 功能： 从stream指定的文件读取字符串，并根据参数format字符串来转换并格式化数据。
    * 参数
        * stream: 已经打开的文件
        * format: 字符串格式，用法和scanf()一样
    * 返回值
        * 成功： 参数数目，成功转换的值的个数
        * 失败 -1

## 四则运算
1. [source](file/00_四则.c)
2. [source](file/01_四则运算.c)
3. [source](file/02_四则运算.c)


## 格式化输出，总结
1. scanf("%s", ch);    printf("%d",1);
2. sscanf();           sprintf();
3. fscanf();           fprintf();

## 大量数据的排序
* [source](file/03_大量数据的排序.c)

