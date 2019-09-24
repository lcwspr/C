#include <stdio.h>
#include <time.h>

/*
    随机10000数据（1-1000），写入到文件，读取出来进行从小到大的排序，再写入到文件中
*/

int main(void)
{
    unsigned int start_time = time(NULL);
    srand((unsigned int)time(NULL));
    FILE * fp = fopen("rand_data.txt", "w");

    if(!fp)
        return -1;

    for(int i = 0; i < 10000; i++)
    {
        fprintf(fp, "%d\n", rand()%1000 + 1);
    }

    fclose();
}


int main02()
{
    FILE * fp = fopen("rand_data.txt", "w");
    if(!fp)
        return -1;
    int * p = (int *)malloc(sizeof(int) * 10000);
    for(int i = 0; i < 10000; i++)
    {
        fscanf(fp, "%d\n", p[i]);
    }


    for(int i = 0; i < 10000 -1; i ++)
    {
        for(int j = 0; j < 10000 - i - 1; j++)
        {
            if(p[j] > p[j+1])
            {
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    fclose(fp);
    FILE * fp = fopen("target.txt", "w");
    if(!fp)
        return -1;
    for(int i = 0; i < 10000; i++)
    {
        fscanf(fp, "%d\n", &p[i]);
    }

    fclose(fp);
    free(p);

    unsigned int end_time = time(NULL);
    printf("%d\n", end_time - start_time);

    return 0;


}



int main03()
{
    unsigned int start_time = time(NULL);

    FILE * fp = fopen("rand_data.txt", "w");
    if(!fp)
        return -1;

    int arr[1000] = {0};
    int value;
    int sum = 0;
    for(int i = 0; i < 10000; i++)
    {
        fscanf(fp, "%d\n", &value);
        arr[value-1]++;
    }

    for(int i = 0; i < 1000; i++)
    {
        prinf("%d\n",arr[i]);
        sum += arr[i];
    }

    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < arr[i]; j++)
        {
            fprintf(fp, "%d\n", i+1);
        }
    }
    fclose(fp);
    unsigned int end_time = time(NULL);
    printf("%d\n", end_time - start_time);
}