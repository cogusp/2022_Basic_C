#include <stdio.h>

int rec_func(int n);		// 1���� n������ ���� ��ȯ�ϴ� �Լ�

int main(void)
{
	printf("%d\n", rec_func(10));

	return 0;
}

int rec_func(int n)
{
	int sum = 0;
	
	if(n > 0) sum = n + rec_func(n - 1);

	return sum;
}