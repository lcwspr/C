#include <stdio.h>

int getSrc()
{
	FILE * fp_pas = fopen("pas.txt", "r");
	FILE * fp_src = fopen("src_p.txt", "w");
	if(!fp_src || !fp_pas)
	{
		return -1;
	}

	// get content from src file
	char ch;
	while((ch = fgetc(fp_pas))!= EOF)
	{
		ch--;
		fputc(ch, fp_src);
	}

	fflush(fp_src);
	
	fclose(fp_src);
	fclose(fp_pas);	

	return 0;
}

int main(void)
{

	FILE * fp_src = fopen("src.txt", "r");
	FILE * fp_pas = fopen("pas.txt", "w");
	if(!fp_src || !fp_pas)
	{
		return -1;
	}

	// get content from src file
	char ch;
	while((ch = fgetc(fp_src))!= EOF)
	{
		ch++;
		fputc(ch, fp_pas);
	}

	fflush(fp_pas);
	fclose(fp_src);
	fclose(fp_pas);

	getSrc();

	return 0;
}