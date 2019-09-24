#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


void tips()
{
    printf("input word test play game.\n");
    printf("press continue\n");
    printf("exit with esc\n");
    char ch = getch();
    if(ch == 27)
    {
        exit(0);
    }
}

void generate_ch(char * arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        arr[i] = rand() % 26 + 'a';
    }
    arr[50] = 0;
}

void print_ch(char * arr, int n)
{
    // 变量  
        // 计时器
            // 开始
            // 结束
        // 计数器
            // 正确个数
    unsigned int start_time = 0;
    unsigned int end_time = 0;
    int right = 0;
    for(int i = 0; i < n-1; i++)
    {
        char ch = getch();
        if(i == 0)
        {
            start_time = time(NULL);
        }
        if(ch == arr[i])
        {
            printf("%c", ch);
            right ++;
        }else
        {
            printf("-");
        } 
    }
    puts("");
    end_time = time(NULL);
    printf("use time: %d s\n", end_time - start_time);
    printf("right rate: %.2f %%\n", right *1.0 / (n-1) * 100);
    if(right *1.0 / (n-1) * 100 > 80)
    {
        printf("good job");
    }
}

int main(void)
{

    // 随机数初始化
    srand((unsigned int)time(NULL));

    // 字库
    char arr[51] = {0};

   while(1)
   {
        // 1. 提示操作
        tips();
        
        // 2. 随机字符串
        generate_ch(arr, 51);
        printf("%s\n", arr);

        // 3. 输入字符
        print_ch(arr, 51);
   }
    
    return 0;
}