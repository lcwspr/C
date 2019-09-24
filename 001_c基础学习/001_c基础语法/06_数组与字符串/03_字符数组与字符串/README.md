# 字符数组与字符串
## 字符数组与字符串的区别
* C语言中没有字符串这种数据类型，可以通过char的数组替代，
* 字符串一定是一个char的数组，但是char的数组未必是字符串。
* 数字0(和字符'\0'等价)结尾的char数组就是一个字符串，但如果char数组没有以数字0结尾，那么就不是一个字符串，只是普通字符数组，所有字符串是一种个特殊的char数组
    * c读取一个字符串 scanf("%[^\n]", arr);
* 例
    ```
        // 不指定长度，没有0结束符，有多少个元素就有多长
        char buf[] = {'a','b','c'};
        printf("buf=%s\n",buf)     // 乱码

        // 指定长度，后面没有赋值的元素，自动补0
        char buf2[100] = {'a','b','c'};
        printf("buf2=%s\n",buf2);

        // 所有元素赋值为0
        char buf3[100] = {0};
    ```
* 特殊的
    * 使用字符串初始化，编译器自动在后面补0，常用
        ```
            char buf8[] = "abcdefg";
        ```
    * \0后面最好不要连着数字，有可能几个数字连起来刚好是一个转义字符
    ```
        \ddd 八进制转义字符，\xdd十六进制转义字符
        \012相当于\n
        char str[] = "012abc";
    ```

## 字符串输入输出
```
#include <stdio.h>

int main(void)
{
    char str1[] = "abcdef";
    char str2[] = "12345";
    char dst[100];

    int i = 0;
    while(str1[i])
    {
        dst[i] = str[i];
        i++;
    }
    int j = 0;
    while(str2[j])
    {
        dest[i+j] = str2[j];
        j++;
    }
    dest[i+j] = '\0';

    return 0;
}
```