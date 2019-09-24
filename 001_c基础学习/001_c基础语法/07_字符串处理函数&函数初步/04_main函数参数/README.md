# 指针数组作为main函数的形参
1. 形式
    `int main(int argc, char * argv[]);`
2. 解释
    1. main函数是操作系统调用的，第一个参数标明argv数组的成员数量，argv数组的每个成员都是char *类型的
    2. argv是命令行参数的字符串数组
    3. argc代表命令行参数的数量，程序名字本身算一个参数
3. 程序
    ```
    // mygcc
        // argc 传参数的个数，包含可执行程序名
        // argv 指针数组，指向输入的参数

        #include<stdlib.h>
        #include<string.h>

        int main(int argc, char * argv[]) // argv[0] -> mygcc
        {
            if(argc <= 1)
            {
                printf("缺少参数\n");
                return -1;
            }
            char arr[1000];
            char temp[256];
            strcpy(arr,"gcc -o ");
            strcpy(temp,argv[1]);
            char * p = strtok(temp, ".");
            strcat(arr, p);
            strcat(arr, " ");
            strcat(arr, argv[1]);

        }
    ```