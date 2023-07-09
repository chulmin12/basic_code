#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,k=24;
	int num[10000];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
		if (num[i] < k) {
			k = num[i];
		}
	}
	printf("%d",k);

}