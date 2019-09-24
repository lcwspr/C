
#include <stdio.h>
#include <string.h>

typedef struct Stu   
{
    char name[20];
    int age;
    char sex;
    char tel[15];
}Stu;



int main(void)
{
    Stu s[5] = {
        {"lcwspr",50, 'm',"110"},
        {"jjewe",42, 'w',"320"},
        {"ewjfjije",22, 'm',"553"},
        {"oiwefjioe",20, 'w',"530"},
        {"jewoife",53, 'm',"830"}
    };
    FILE * fp = fopen("first.txt", "wb");
    if(!fp)
        return -1;
    
    int ret = fwrite(s, sizeof(Stu), 5, fp);
    fflush(fp);
    fclose(fp);



    FILE * rp  = fopen("first.txt", "rb");
    if(!rp)
        return -1;
    Stu show[5];
    memset(show, sizeof(show), 0);
    fread(show,sizeof(Stu),5, rp);

    fclose(rp);
    for(int i = 0; i < 5; i++)
    {
        printf("name: %s \t age:%d \t sex :%c\t tel:%s\n", show[i].name, show[i].age, show[i].sex, show[i].tel);
    }
    

}
