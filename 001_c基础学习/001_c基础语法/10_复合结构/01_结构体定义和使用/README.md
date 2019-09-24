# 结构体定义和使用
* 概述
    * 数组：描述一组具有相同类型数据的有序集合，用于处理大量相同类型的数据运算
    * 有时候我们需要将不同类型的数据组合成一个有机的整体，比如：一个学生有学号，姓名，性别等等属性，显然单独定义以上变量十分繁琐，数据不便于管理
* C语言给出来另外一种构造数据类型---结构体
## 结构体变量的定义和初始化
1. 定义方式
    * 先声明结构体类型在定义变量名
        ```
        struct stu
        {
            成员列表
        };
        struct stu Mike;
        ```
    * 在声明类型的同时定义变量
        ```
        struct stu
        {
            成员列表
        }Mike,Bob;
        ```
    * 直接定义结构体类型变量(无类型名)
        ```
        struct 
        {
            成员列表
        }Mike,Bob;
        ```
2. 结构体类型和结构体变量的关系
    1. 结构体类型
        * 指定了一个结构体类型，它相当于一个模型，但其中并无具体类型，系统对之也不分配实际内存单元。
    2. 结构体变量
        * 系统根据结构体类型(内部成员状况)为之分配空间。

3. 初始化
    ```
    // 结构体类型的定义
    struct stu
    {
        char name[50];
        int age;
    }

    // 先定义类型，然后再定义变量(常用)
    stuct stu s1 = {"mike", 18};

    // 定义类型的同时定义变量
    stuct stu2
    {
        char name[50];
        int age;
    }s2 = {"lily",22};
    ```
    ```
    // 按顺序进行赋值
    struct student
    {
        char name[21];
        unsigned int age;
        char tel[16];
        float scores[3];
        char sex;
    }

    struct student stu = {"lcwspr", 500, "13212383447", 100.0f, 200, 300, 'M'};
    ```
    ```
    struct Student stu = {.age=20,.num = 15,.name="lcwspr",.score={1.4, 2.3, 4.3}};
    ```
## 结构体成员的使用
```
// 结构体类型的定义
struct stu
{
    char name[50];
    int age;
}

// 如果时普通变量，通过使用点运算符操作结构体成员。
strcpy(s1.name, "abc");
s1.age = 18;

// 如果时指针变量，通过->操作结构体成员
strcpy((&s1)->name, "test");
(&s1)->age = 22;
```
