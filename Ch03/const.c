/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch03 / Prj12 / const.c
	Ű���� const�� ����� ��� ����
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	//Ű���� const�� ��� �����
	const double RATE = 0.03;	//�������� 3%
	int deposit = 800000;

	//RATE = 0.032;	//������ �Ұ���
	printf("������: %f\n", RATE);
	printf("���� �ܰ�: %d\n", deposit);
	printf("���ھ�: %f\n", deposit * RATE);

	//���ڿ��� ������ ����
	char* str = "���� C ��� �Թ���"; //char *str, char * str ��� ����
	char* const title = "������ C ���"; //title�� �ٸ� ���ڿ� ��� ������ �Ұ�

	str = "�ֱ� ���� ���� C ��� �Թ���";
	//title = "C ��� ����ġ"; //���� �Ұ���

	printf("\n%s: %s\n", str, title); //���ڿ� ���� ���

	return 0;
}
