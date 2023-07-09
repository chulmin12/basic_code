#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a = '\0';
	while (a != 'q')
	{
		scanf("%c",&a);
		printf("%c", a);
	}

}