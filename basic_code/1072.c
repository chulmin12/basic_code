#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a,b;
	scanf("%d",&a); //5
	zero:
	scanf("%d",&b);  //1 2
	printf("%d\n", b);  //1 2 3 4 5 
	a -= 1;    //4 3 2  1  0 
	if (a > 0) {  //4 
		goto zero;
	}
}