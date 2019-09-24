# 指针和函数
## 函数形参改变实参的值
* 在C语言中，一般情况下函数的形参不能够改变实参的值，但是我们可以通过传递实参的地址来改变这种默认的值传递机制
    ```
    void swap01(int x, int y)
    {
        int temp = x;
        x = y;
        y = temp;    // 值传递，不能够改变实参的值
    }
    void swap02(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    int main
    {
        int a = 3;
        int b = 5;
        swap01(a,b);   //值传递，不能改变实参的值
        swap02(&a,&b); // 地址传递，传递地址来改变实参的值
    }
    ```

## 数组名作函数参数
* 数组名作为函数函数，函数的形参会退化为指针。(在传递数组时必须传递数组大小)
    ```
    // void printArray(int a[10], int n);
    // void printArray(int a[], int n);    // 只要参数中涉及到数组，都会退化成指针
    void printArray(int *a, int n)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
    }
    ```
    * 如果是一个字符串可以不需要长度，可以通过结束标记求出

## 指针作为函数返回值
* 如果char * 作为返回值
    ```
        char * arr = "hello world";   // 指针指向位于常量区的字符串常量(不能修改)
        char arr[] = "hello world";   // 初始化一个字符数组
    ```

## strstr函数
* 注意
    1. 两个匹配的字符串，必须完全匹配(匹配个数=字符串长度)
    2. 如果匹配一个字符串，需要记录被匹配字符串地址
    3. 如果匹配一半未成功，回到记录被匹配字符串地址+1
    4. 如果匹配的被匹配字符串结尾，匹配个数不等于字符串长度
* 代码
    * [source](file/01_实现strstr.c)