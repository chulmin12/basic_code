#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int r, g, b;
	double sum = 0;
	scanf("%d %d %d", &r, &g, &b);
	sum = (float)r * g * b / 8 / 1024 / 1024;
	printf("%.2lf MB", sum);
}