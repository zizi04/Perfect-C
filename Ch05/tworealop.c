// file: tworealop.c 
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	double a = 0, b = 0;

	printf("��������� ������ �� �Ǽ��� �Է��ϼ���\n");
	scanf("%lf, %lf", &a, &b);

	printf("%8.2f + %8.2f ==> %8.2f\n", a, b, a + b);
	printf("%08.2f - %08.2f ==> %8.2f\n", a, b, a - b);
	printf("%+8.2f * %+8.2f ==> %8.2f\n", a, b, a * b);
	printf("%-8.2f / %-8.2f ==> %8.2f\n", a, b, a / b);

	return 0;
}
