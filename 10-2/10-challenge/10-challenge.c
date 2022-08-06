#include <stdio.h>

void input_nums(int* lotto_nums);		// �迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto_nums);		// �迭�� ����� ���� ����ϴ� �Լ�

int main(void)
{
	int lotto_nums[6];					// �ζ� ��ȣ�� ������ �迭

	input_nums(lotto_nums);				// �Է� �Լ� ȣ��
	print_nums(lotto_nums);				// ��� �Լ� ȣ��

	return 0;
}

void input_nums(int* lotto_nums)
{
	for (int i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums + i);

		for (int j = 0; j < i; j++)
		{
			if (lotto_nums[i] == lotto_nums[j])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				i--;
				break;
			}
		}
	}
	
}

void print_nums(int* lotto_nums)
{
	printf("�ζ� ��ȣ : ");

	for (int i = 0; i < 6; i++)
	{
		printf("%d  ", lotto_nums[i]);
	}
}