#include <stdio.h>

int main(void)
{
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);
	// 2���� ���ڸ� ���� �Է�
	//scanf(" %c %c", &ch1, &ch2);
	printf("[%c%c]", ch1, ch2);
	// �Էµ� ���� ���

	return 0;
}