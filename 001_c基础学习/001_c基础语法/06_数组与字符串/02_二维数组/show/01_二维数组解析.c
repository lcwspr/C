#include <stdio.h>

int main(void)
{
	int a[3][4] = {0};

	// 二维数组占用的总空间的大小
	printf("%u\n", sizeof(a));
	// 其实就是对于数组名取地址，会得到一个指向整个数组的指针
	int (* p_arr)[3][4] = &a;
	printf("%p  %p\n", p_arr,p_arr + 1);

	// 数组a[0] 就当等于首元素的数组名，使用sizeof可以得到改行元素的大小
	printf("%u\n",sizeof(a[0]));
	printf("%p  %p\n", a[0], a[0] + 1);
	printf("%p  %p\n", &a[0], &a[0] + 1);
	int * p_ele = a[0];
	int (* p_row)[4] = &a[0];

	// 数组行数
	printf("%u\n", sizeof(a)/sizeof(a[0]));
	// 数组列数
	printf("%u\n", sizeof(a[0]) / sizeof(a[0][0]));
	// 数组元素数
	printf("%u\n", sizeof(a) / sizeof(a[0][0]));

	return 0;
}