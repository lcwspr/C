# 结构体和指针
## 堆空间
1. 结构体和堆空间
    ```
    struct stuinfo
    {
        char *name;
        int age;
    }

    struct stuinfo si;
    si.name = (char *)malloc(sizeof(char)*21);
    strcpy(si.name,"zhangsan");
    si.age=18;
    ```
2. 结构体指针
    ```
    struct sinfo
    {
        char * name;
        int age;
    }stu;
    struct sinfo * s = &stu;
    s->name = malloc(sizeof(char)* 21);
    strcpy(s->name, "hehe");
    free(s->name);
    ```
3. 开辟堆空间结构体
    ```
    struct tec *p = (struct tec *)malloc(sizeof(t));
    p->name = (char *)malloc(sizeof(char) * 21);
    strcpy(p->name,"hello");
    p->age = 23;

    if(p->name)
    {
        free(p->name);
        p->name = NULL;
    }
    if(p)
    {
        free(p);
    }
    ```
## 堆空间学生成绩
* [source](file/01_堆空间学生成绩操作.c)