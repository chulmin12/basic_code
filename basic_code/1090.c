#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	//������ 
	long n, a, r;
	scanf("%ld %ld %ld", &a, &r, &n);
	printf("%ld", a * (int)pow(r, n - 1));
	
}