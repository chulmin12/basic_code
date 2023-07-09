#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int num[10000];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
	}
	for (int j = n; j >= 1; j--) {
		printf("%d ", num[j]);
	}
}