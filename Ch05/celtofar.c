// celtofar.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	double fahrenheit, celsius;
	printf("��ȯ�� �����µ��� �Է��ϼ���. >> ");
	scanf("%lf", &celsius);

	fahrenheit = (9.0 / 5.0) * celsius + 32.0;
	printf("\n�Էµ� %.2f���� ȭ���µ��� %.2f�� �Դϴ�.\n", celsius, fahrenheit);

	return 0;
}