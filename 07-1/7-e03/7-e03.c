#include <stdio.h>

double centi_to_meter(int a);		// �Լ� ����

int main(void)
{
	double res;						// �Լ��� ��ȯ���� ������ ����

	res = centi_to_meter(187);		// �Լ� ȣ��, ��ȯ���� res�� ����
	printf("%.2lfm\n", res);		// ��ȯ�� res�� �� ���

	return 0;
}

double centi_to_meter(int a)		// �Լ� ���� ����
{
	double b;						// �ʿ��� ���� ����

	b = a * 0.01;					// �Ű����� cm�� ���� m������ ȯ��

	return b;						// ȯ��� �� ��ȯ
}