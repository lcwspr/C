/*
* @Author: lcwspr
* @Date:   2019-08-29 15:44:03
* @Last Modified by:   lcwspr
* @Last Modified time: 2019-08-29 15:48:30
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char * p = malloc(sizeof(char) * 20); // 开辟多大只能操作多大
	strcpy(p, "hello world");
	printf("%s", p);

	free(p);

	return 0;

}

