#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	int sum = 0;
	int i = 0;
	scanf("%d", &a);
	while (sum<a)
	{
		i++;
		sum += i;
	}
	printf("%d", sum);
}