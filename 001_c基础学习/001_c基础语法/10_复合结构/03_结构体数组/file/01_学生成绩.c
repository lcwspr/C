#include <stdio.h>

struct stu
{
    char name[21];
    float scores[3];
};

int comparator(const struct stu * const s1, const struct stu * const s2)
{
    int res1 = s1->scores[0] + s1->scores[1] + s1->scores[2];
    int res2 = s2->scores[0] + s2->scores[1] + s2->scores[2];

    return res1 - res2;
}

int buuble_sort(struct stu * data, int n)
{
    for(int i = n-1; i >0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(comparator(data+j,data+j+1) > 0)
            {
                struct stu temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

int main()
{
    struct stu s[3];
    for(int i = 0; i < 3; i++)
    {
        printf("请输入学生姓名   成绩\n");
        scanf("%s%f%f%f",s[i].name,&s[i].scores[0],&s[i].scores[1],&s[i].scores[2]);

    }
    buuble_sort(s, 3);

    for(int i = 0; i < 3; i++)
    {
        printf("姓名： %s\n", s[i].name);
        printf("成绩:%.1f  %.1f  %.1f\n",s[i].scores[0],s[i].scores[1],s[i].scores[2]);
    }

    return 0;
}