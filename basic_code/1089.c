#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������� ���� (���°�������� �ǹ��ϴ� ����-1)�����ǰ�+���۰�
	int n,a,b;
	scanf("%d %d %d",&a,&b,&n);
	printf("%d", (n - 1)*b + a);
}