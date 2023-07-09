#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%X", &a);
	for (int i = 1; i < 16; i++) {
		printf("%X*%X=%X\n", a, i, a * i);
	}
}