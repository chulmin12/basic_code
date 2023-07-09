#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a, temp='a';
	scanf("%c", &a);
	while (a >= temp)
	{
		printf("%c ", temp);
		temp++;
	}

}