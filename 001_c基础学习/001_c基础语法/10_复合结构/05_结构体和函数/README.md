# 结构体和函数
1. 值传递，不会改变实参的值
    ```
    struct info
    {
        char name[21];
        int age;
    }
    void func(struct info s)
    {
        strcpy(s.name,"李四");
        s.age = 20;
    }

    int main()
    {
        struct info s = {"张三", 18};
        func(s);
    }

    ```
2. 地址传递，会改变实参的值
    ```
    func(struct info *s)
    {
        strcpy(s->name, "李四")
        s->age = 20;
    }
    func(s);
    ```
3. 函数返回结构体类型变量
    ```
    struct info func()
    {
        struct info s;
        strcpy(s.name, "李四");
        s.age = 20;

        return s;
    }
    ```
    * 函数命名规范
        1. Linux `int _role_level`
        2. windows `int i_role_level`
        3. java `int bubbleSort`