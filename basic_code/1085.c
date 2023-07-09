#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, b, c, s;
	double sum;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	sum = (float)h * b * c * s/8/1024/1024;
	printf("%.1lf MB", sum);
}