# 数组和指针
## 数组名
1. 数组名字是数组的首元素地址,但他是一个常量
    ```
    int a[] = {1,2,3,4,5,6};
    printf("a=%p\n",a);
    // a = 10  // error,数组名只是常量,不能够修改
    ```

2. 指针操作数组元素
    ```
    int a[] = {1,2,3,4,5,6,7,8,9};
    int i = 0;
    int n = sizeof(a) / sizeof(a[0]);
    for(i = 0; i < n; i++)
    {
        printf("%d\t",*(a+i));
    }

    int *p = a;   // 定义一个指针变量保存a的地址.
    for(i = 0; i < n; i++)
    {
        p[i] = 2 * i;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\t",*(p+i));
    }
    ```

3. 指针加法运算
    * 加法运算
        * 指针计算不是简单的整数相加
            * 如果是一个int *, +1的结果是增加一个int 的大小
            * 如果是char * ,+1的结果是增加一个char大小
        * 例子
            * 指针加法相当于增加指针长度
                ```
                int a;
                int *p = &a;
                printf("%p",p);
                p+=2;          // 移动两个int
                printf("%d\n",p);
                ```
            * 通过改变指针指向操作数组元素
                ```
                int a[]={1,2,3,4,5,6,7,8,9};
                int i = 0;
                int n = sizeof(a) / sizeof(a[0]);

                int *p = a;
                for(i = 0; i < n; i++)
                {
                    printf("%d",*p);
                    p++;
                }
                ```
                * 指向数组的指针,当操作指针的时候,间接操作了数组
    * 减法运算
        ```
        int a[] = {1,2,3,4,5,6,7,8,9};
        int i = 0;
        int n = sizeof(a)/ sizeof(a[0]);

        int * p = a+n-1;
        for(i = 0; i<n; i++)
        {
            printf("%d",*p);
            p--;
        }
        ```
## 相关例题
1. 指针冒泡排序
    * [source](file/01_指针冒泡排序.c)
    * 指针和数组名的区别
        * 数组名通过sizeof运算符可以求出数组大小，指针只包含数组的首地址信息，不包含其他信息

2. 实现strchr()
    * [source](file/02_实现strchr.c)

3. 字符串反转
    * [source](file/03_字符串反转.c)