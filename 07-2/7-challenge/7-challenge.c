#include <stdio.h>

int rec_func(int n);		// 1부터 n까지의 합을 반환하는 함수

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