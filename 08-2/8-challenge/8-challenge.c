#include <stdio.h>

int main(void)
{
	char str[80];
	int cnt = 0;

	printf("���� �Է� : ");
	gets(str);

	for (int i = 0; i < str; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else if('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			cnt++;
		}
	}

	printf("�ٲ� ���� : ");
	puts(str);

	printf("�ٲ� ���� �� : %d\n", cnt);

	return 0;
}