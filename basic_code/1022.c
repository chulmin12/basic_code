#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);
}