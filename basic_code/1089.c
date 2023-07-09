#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//등차수열 공식 (몇번째수인지를 의미하는 정수-1)등차의값+시작값
	int n,a,b;
	scanf("%d %d %d",&a,&b,&n);
	printf("%d", (n - 1)*b + a);
}