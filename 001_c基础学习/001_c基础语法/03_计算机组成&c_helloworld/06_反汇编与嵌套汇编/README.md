# 反汇编与c嵌套汇编
```
#include <stdio.h>
int main()
{
	//定义整型变量a, b, c
	int a;
	int b;
	int c;
	__asm
	{
		mov a, 3	//3的值放在a对应内存的位置
		mov b, 4	//4的值放在a对应内存的位置
		mov eax, a	//把a内存的值放在eax寄存器
		add eax, b	//eax和b相加，结果放在eax
		mov c, eax	//eax的值放在c中
	}
	printf("%d\n",  c);//把c的值输出
	return 0;//成功完成
}

```