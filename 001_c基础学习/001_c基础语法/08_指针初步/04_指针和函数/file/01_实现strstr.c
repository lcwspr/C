#include <stdio.h>

char * mystrstr(char * dest, char * src)
{
    int i = 0;
    while(dest[i])
    {
        if(dest[i]== src[0])
        {
            int temp = i;
            int j = 0;
            while(dest[++temp]==src[++j] && src[j])
                continue;
            if(!src[j])
                return &dest[i];
        }
        i++;
    }
    return NULL;
} 



char * mystrstr02(char * dest, char *src)
{
	char * p = NULL;
	char * temp = src;
	while (*dest)
	{
		p = dest;
		while (*dest == *temp && *dest)
		{
			dest++;
			temp++;
		}
		if (!*temp)
			return p;
		else
			temp = src;
		dest = p;
		dest++;
	}

	return NULL;
}

int main(void)
{
    char * s = mystrstr02("hell","llo");
    printf("%s",s);

    return 0;
}