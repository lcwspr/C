# 结构体的嵌套
1. 例子
    ```
    struct stra
    {
        int a;
        float b;
        char c;
    }
    
    struct strb
    {
        double d;
        char * e;
        short f;
        struct stra abc;
    }

    int main()
    {
        struct strb ss;
        ss.d = 10.0f;
        ss.abc.a = 100;
    }
    ```