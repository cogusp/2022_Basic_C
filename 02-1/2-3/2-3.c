#include <stdio.h>

int main(void)
{
	printf("Be happy\n");					// "Be happy"�� ����ϰ� ���� �ٲ�(\n)
	printf("12345678901234567890\n");		// ȭ�鿡 �� ��ȣ ����ϰ� ���� �ٲ�(\n)
	printf("My\tfriend\n");
	// "My"�� ����ϰ� �� ��ġ�� �̵�(\t) �Ŀ� "friend"�� ����ϰ� ���� �ٲ�(\n)
	printf("Goot\bd\tchance\n");			// "Goot"�� ����ϰ� �� ĭ �������� �̵�(\b)��
	// t�� d�� �ٲٰ� �� ��ġ�� �̵�(\t) �Ŀ� "chance"�� ����ϰ� ���� �ٲ�(\n)
	printf("Cow\rW\a\n");
	// �� ������ �̵�(\r)�� C�� W�� �ٲٰ� ���Ҹ�(\a)�� ���� ���� �ٲ�(\n)

	return 0;
}