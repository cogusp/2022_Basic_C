#include <stdio.h>

int main(void)
{
	char str[80];
	int cnt = 0;

	printf("문장 입력 : ");
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

	printf("바뀐 문장 : ");
	puts(str);

	printf("바뀐 문자 수 : %d\n", cnt);

	return 0;
}