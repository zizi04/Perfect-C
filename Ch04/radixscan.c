// file: radixscan.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("������, ������, ���������� ���� �Է��ϼ���.\n");
	scanf("%d %o %x", &a, &b, &c);
	printf("%d %#o %#x\n\n", a, b, c);

	printf("������, ������(0���� ǥ��), ��������(0x���� ǥ��)�� ���� �Է��ϼ���.\n");
	scanf("%i %i %i", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	return 0;
}
