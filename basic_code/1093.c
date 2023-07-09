#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,num;
	int arr[24];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d",&num);
		arr[i] = arr[num+1];
		printf("%d\n", arr[i]);
	}
}