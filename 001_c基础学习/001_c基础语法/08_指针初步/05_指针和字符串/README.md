# 指针和字符串
## 字符指针和字符串
```
char arr[] = "hello world";
char * p;
p = arr;
*p = 'A';
p++;
*p = 'B';
printf("%s\n",p);   // Bllo world
```

## 字符串常量和字符数组和指针
```
char * arr = "hello world"; // 常量区
char arr[] = "hello world"  // 栈区
printf("%s\n", arr);
printf("%c\n", arr[0]);

// 以下会修改常量区数据，会报错
char * p = arr;
p[0] = 'A';

```
* strcat函数实现
    * [](file/01_strcat函数实现.c)


## const 修饰的指针变量
1. const修饰一个变量为只读
    * `const int a = 10;`
2. 指针变量，指针指向的内存
    * `char buf[] = "aijoiejfjioe";`
    * `char * arr = "hello"`
3. const常量
    * 如果const修饰*那么说明内存中的值不能改变
    * 如果const修饰变量那么说明指针的指向不能改变
    * 可以加两个const那么既不能改变值也不能改变指针指向

## 字符串按照大小排序
* [source](file/02_字符串排序.c)