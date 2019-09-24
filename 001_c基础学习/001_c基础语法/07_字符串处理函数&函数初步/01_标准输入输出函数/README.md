# 字符串处理函数
1. gets()
    * 头文件： stdio.h
    * 函数原型： `char * gets(char * s);`
    * 功能：从标准输入读入字符，并保存到s指定的内存空间，直到出现换行符或读到文件结尾为止。
    * 参数：
        * s -> 字符串首地址
    * 返回值
        * 成功：读入的字符串,返回一个指针
        * 失败：NULL
    * 注意：由于scanf()和gets()无法知道字符串s大小，必须遇到换行符或读到文件结尾才结束接受输入，因此容易导致字符数组越界，缓冲区溢出的情况
    * 例子
        ```
        char ch[100];
        gets(ch);
        ```

2. puts()
    * 头文件：stdio.h
    * 函数原型：`int puts(const char *s);`
    * 功能： 标准设备输出s字符串，在输出完成后自动输出一个'\n'.
    * 参数：
        * s: 字符串首地址
    * 返回值
        * 成功： 非负数
        * 失败： -1

3. fgets()
    * 头文件： stdio.h
    * 原型：`char * fgets(char *s, int size, FILE * stream);`
    * 功能：从stream指定的文件内读入字符，保存到s所指定的内存空间，知道出现换行符，读到文件结尾或是已读了size-1个字符为止，最后会自动加上字符'\0'作为结束标记
    * 参数：
        * s：字符串
        * size: 指定最大读取字符串的长度(size-1)
        * stream: 文件指针，如果读取键盘输入的字符串，固定写为stdin
    * 返回值
        * 成功：读取到的字符串
        * 失败：读到文件尾或出错 NULL
    * fgets()在读取一个用户通过键盘输入的字符串时，同时把用户输入的回车也算作字符串的一部分，通过scanf和gets输入一个字符串的时候，不包含结尾的'\n',但通过fgets结尾多了'\n',fgets()函数是安全的，不存在缓冲区溢出问题
4. fputs()
    * 头文件： stdio.h
    * 函数原型： `int fputs(const char * str, FILE * stream);`
    * 功能：将str所指定的字符串写入到stream指定的文件中，字符串结束符'\0'不写入流
    * 参数
        * str: 字符串
        * stream: 文件指针，如果输出到屏幕，固定为stdout
    * 返回值
        * 成功： 0
        * 失败： -1
    * fputs()时puts()的文件操作版本，但fputs()不会自动输出一个'\n'

5. printf
6. scanf
    1. 接受换行结束,可以接受空白
        `scanf("%[^\n]", arr);`
    2. 在scanf获取数据数据时，建议不要添加任何字符，空格除外
    3. `scanf("%4d%4d%4d",&a, &b, &c);`
        * 有限定字符宽度的格式化
    4. 屏蔽数据类型%\*d 屏蔽数字，%\*c 
    5. 屏蔽一个区间内的
        * `scanf("%*[a-z]%c",&ch);`

7. strlen()
    * 头文件： string.h
    * 原型： `size_t strlen(const char *s);`
    * 功能： 计算指定字符串s的长度，不包含字符串结束符\0
    * 参数： 
        * s: 字符串首地址
    * 返回值
        * 字符串s的长度，size_t为unsigned int类型

8. strcpy()
    * 头文件： string.h
    * 原型： `char * strcpy(char *dest, const char * src);`
    * 功能：把src所指向的字符串复制到dest所指向的空间中，'\0'也会拷贝过去。
    * 参数：
        * dest: 目的字符串首地址
        * src: 源字符首地址
    * 返回值
        * 成功： 返回dest字符串的首地址
        * 失败： NULL
    * 注意
        * 如果参数dest所指的的内存空间不够，可能会造成缓冲溢出的错误情况。

9. strncpy()
    * 头文件： string.h
    * 源文件： `char * strncpy(char * dest, const char *src, size_t n);`
    * 功能： 把src指向字符串的前n个字符复制到dest所指向的空间中，是否拷贝结束符看指定的长度是否包含\0
    * 参数
        * dest: 目的字符串首地址
        * src: 源字符首地址
        * n: 指定需要拷贝字符串个数
    * 返回值
        * 成功： 返回dest字符串的首地址
        * 失败： 返回NULL

10. strcat()
    * 头文件: string.h
    * 原型：`char * strcat(char * dest, const char * src);`
    * 功能： 将src字符串连接到dest的尾部，'\0'也会追加过去
    * 参数
        * dest: 目的字符串首地址
        * src: 源字符首地址
    * 返回值
        * 成功： 返回dest字符串的首地址
        * 失败： 返回NULL

11. strncat()
    * 头文件： string.h
    * 原型： `char * strncat(char *dest,const char * src, size_t n);`
    * 功能： 将src字符串前n个字符连接到dest的尾部，'\0'也会追加过去。
    * 参数：
        * dest: 目的字符串首地址
        * src: 源字符首地址
        * n: 指定需要追加字符串个数
    * 返回值
        * 成功： 返回dest字符串的首地址
        * 失败： 返回NULL

12. strcmp()
    * 头文件： string.h
    * `int strcmp(const char *s1, const char * s2);`
    * 功能： 比较s1和s2的大小，比较的时字符ascii码大小
    * 参数
        * s1: 字符串1首地址
        * s2: 字符串2首地址
    * 返回值
        * 相等 0
        * 大于 >0
        * 小于 <0

13. strncmp()
    * 头文件： string.h
    * 原型： `int strncmp(const char *s1, const char *s2, size_t n);`
    * 功能： 比较s1和s2前n个字符的大小，比较的时字符ASCII码大小
    * 参数
        * s1: 字符串1首地址
        * s2: 字符串2首地址
        * n: 指定比较字符串的数量
    * 返回值
        * 相等： 0
        * 大于： >0
        * 小于: < 0

14. sprintf()
    * 头文件： stdio.h
    * 原型： `int sprintf(char * _CRT_SECURE_NO_WARNING,const char * format, ...);`
    * 功能： 根据参数format字符串来转换并格式化数据，然后将结果输出到str指定的空间中，知道出现字符串结束符'\0'为止
    * 参数
        * str: 字符串首地址
        * format: 字符串格式，用法和printf()一样
    * 返回值
        * 成功： 实际格式化的字符个数
        * 失败： -1

15. sscanf()
    * 头文件： stdio.h
    * 原型： `int sscanf(const char * str, const char *format, ..);`
    * 功能： 从str指定的字符串读取数据，并根据参数format字符串来转换并格式化数据。
    * 参数：
        * str: 指定的字符串首地址
        * format: 字符串格式，用法和scanf()一样
    * 返回值
        * 成功：成功转换的值的个数
        * 失败： -1

16. strchr()
    * 头文件： string.h
    * 原型： `char * strchr(const char * s, int c);`
    * 功能： 在字符串s中查找字母c出现的位置
    * 参数：
        * s: 字符串首地址
        * c： 匹配字母
    * 返回值    
        * 成功： 返回第一次出现c的地址
        * 失败： NULL


17. strstr()
    * 头文件: string.h
    * 原型: `char * strstr(const char *haystack, const char * needle);`
    * 功能: 在字符串hyastack中查找字符串needle
    * 参数
        * haystack: 源字符串首地址
        * needle: 匹配字符串首地址
    * 返回值
        * 成功: 返回第一次出现的needle地址
        * 失败: NULL

18. strtok()
    * 头文件: string.h
    * 原型: `char * strtok(char * str, const char * delim);`
    * 功能: 将字符串分割为一个个片段.当strtok()在参数s的字符串中发现参数delim中包含的分割字符时,则会将该字符改为\0,当连续出现多个时只替换第一个位\0
    * 参数: 
        * str: 指向想要分隔的字符串
        * delim: 为分隔字符串中包含的所有字符
    * 返回值
        * 成功: 分割后字符串首地址
        * 失败: NULL
    * 注意
        * 在第一次调用时: strtok()必须给与参数s字符串
        * 往后的调用则将参数s设置成NULL,每次调用成功则返回指向被分割除片段的指针
        ```
            char a[100] = "adc*fycv*ebcv*hehbehe*ewfje";
            char * s = strtok(a, "*"); // 将* 分割的字串取出
            while(s != NULL)
            {
                printf("%s\n",s);
                s = strtok(NULL, "*");
            }
        ```

17. atoi()
    * 头文件: stdlib.h
    * 原型: `int atoi(const char * nptr);`
    * 功能: atoi()会扫描nptr字符串,跳过前面的空格字符,知道遇到数字或者正负号才开始做转换,而遇到非数字或者字符串结束符\0才结束转换,并将结果返回,返回值.
    * 参数: 待转换的字符串
    * 返回值: 成功转换后的整数

18. 类似的函数
    * atof()
    * atol()