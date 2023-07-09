#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	aa:
	scanf("%d",&a);
	if (a != 0) {
		printf("%d\n", a);
		goto aa;
	}
	
}