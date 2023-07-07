#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a;
	scanf("%c", &a);
	switch (a)
	{
	case 'A':
		printf("best!!!\n");
		break;
	case 'B':
		printf("good!!\n");
		break;
	case 'C':
		printf("run!\n");
		break;
	case 'D':
		printf("slowly~\n");
		break;
	default:
		printf("what?\n");
		break;
	}
}