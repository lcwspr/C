# 块读写函数
1. 写文件
    * 函数原型
        * `size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);`
    * 参数说明
        * ptr: 准备写入文件数据的地址
        * size: size_t位unisgned int类型，此参数指定写入文件内容的块数据大小
        * nmemb: 写入文件的块数，写入文件数据总大小位size* nmemb
        * stream: 已经打开的文件指针
    * 返回
        * 成功，实际写入文件数据块数目，和nmemb相等
        * 返回0
    * 例子
        ```
        char arr[16] = "hello world";
        fwrite(arr, sizeof(char), 16, fp);
        ```
        ```
        int num[] = {1,2,3,4};
        fwrite(num, sizeof(int), 4, fp);
        fflush(fp);
        ```

2. 读文件
    * 函数原型 
        * `size_t fread(void * ptr, size_t size, size_t nmemb, FILE * stream);`
    * 功能
        * 以数据块的方式从文件读取内容
    * 参数
        * ptr: 存放读取出来数据的内存空间
        * size: size_t 为unsigned int类型，此参数指定读取文件内容的块数据大小
        * nmemb: 读取文件的块数，读取文件数据总大小为size * nmmb
        * stream : 已经打开的文件指针
    * 返回值
        * 实际读取到内容的块数目，如果此值比nmemb小，但大于0，说明读到文件结尾
        * 失败 0
    * 例子
        ```
        FILE * rp = fopen("test.txt", "rb");
        int i = 0;
        int res_num[10]={0};

        fread(res_num + i++, sizeof(int), 1, rp);
        while(!feof(rp))
        {
            printf("read it   %d\n");
            fread(res_num + i++, sizeof(int), 1, rp);
        }

        for(int i = 0; i < 10; i ++)
        {
            printf("%d\t", res_num[i]);
        }
        ```
        * [简单文件读写](file/01_简单的读写操作.c)


