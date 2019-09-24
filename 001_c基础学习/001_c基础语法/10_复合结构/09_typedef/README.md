# typedef 
* typedef 为C语言关键字，作用是为一种数据类型(基本类型或是自定义数据类型)定义一个新的名字，不能创建新类型。
    * 与#define不同，typedef仅限于数据类型，而不能是表达式或具体的值
    * \#define发生在预处理，typedef发生在编译阶段

* 给一个已有类型起一个别名，方便操作
    * `typedef unsigned long long ull;`
* 简化结构体
    ```
    struct student_info_list
    {
        char name[20];
        char sex;
    }
    typedef struct student_info_list sinfo;
    ```