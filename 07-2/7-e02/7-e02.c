#include <stdio.h>

void sum(int a);				// 함수 선언

int main(void)
{
	sum(10);					// 1부터 10까지의 합 출력
	sum(100);					// 1부터 100까지의 합 출력
	return 0;
}

void sum(int a)					// 함수 원형
{
	int i, result = 0;				// 반복 회수를 세는 변수와 합을 누적할 변수 정의

	for (i = 1; i <= a; i++)	// 1부터 매개변수까지 증가
	{
		result += i;			// 반복하여 합을 누적하는 변수에 더한다.
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", a, result);		// 출력
}