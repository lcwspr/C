#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

void tips()
{
	//system("cls");
	printf("==============������Ϸ==============\n");
	printf("==========�������������Ϸ==========\n");
	printf("===========��ESC�˳���Ϸ============\n");
	char ch = _getch();
	if (ch == 27)
	{
		exit(0);
	}
}
void rand_ch(char *arr)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 50; i++)
	{
		arr[i] = rand() % 26 + 'a';
	}
}
void start_game(char *arr)
{
	//��ʱ��
	char ch;
	int start_time;
	int end_time;
	int count = 0;
	for (int i = 0; i < 50; i++)
	{
		ch = _getch();
		if (i == 0)
		{
			//��¼ʱ�� ��λ���� 1970 1 1
			start_time = time(NULL);
		}
		if (ch == arr[i])
		{
			count++;
			printf("%c", ch);
		}
		else
		{
			printf("_");
		}

	}
	end_time = time(NULL);
	printf("\n��ʱ��%d (��)\n", end_time - start_time);
	printf("��ȷ�ʣ�%.f %%\n", count*1.0 / 50 * 100);
	tips();
}
int main(void)
{
	char arr[51] = {0};
	//1����ʾ
	//2������ַ���
	//3��ʱ�� ��ȷ��
	while (1)
	{
		tips();
		rand_ch(arr);
		printf("%s\n\n", arr);
		start_game(arr);
	}
	return 0;
}