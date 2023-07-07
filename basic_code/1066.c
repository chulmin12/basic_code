#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < 3; j++) {
		if (arr[j] % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
}