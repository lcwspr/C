#include <stdio.h>

struct opter
{
    int a;
    int b; 
    char c;
    float value;
};
typedef struct opter opt;


int main(void)
{

    opt * p = (opt *) malloc(sizeof(opt)*100);
    FILE * fp = fopen("xxx.txt", "r");
    if(!fp)
        return -1;
    for(int i = 0; i < 100; i++)
    {
        fscanf(fp, "%d%c%d=\n", &(p+i)->a, &p[i]->c, p[i].b);
        switch(p[i].c)
        {
            case '+':
                value = ...;
        }
    }
    fclose(fp);
    fp = fopen("res", "w");
    if(!fp)
        return -1;
    
    for(int i = 0; i < 100; i++)
        fprintf(fp, "%d%c%d=%.2f\n",p[i].a,p[i].c,p[i].b,p[i].value);
    fclose(fp);

}