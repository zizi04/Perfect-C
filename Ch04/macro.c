/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch04 / Prj01 / macro.c
	#define�� �̿��Ͽ� ���� �̸��� �ٿ��� ��ũ�� ����� ����
	V 1.0 2016.
*/

#include <stdio.h>

#define	KPOP 50000000			//���� ��ũ�� ���
#define	PI 3.14					//�Ǽ� ��ũ�� ���
#define	PRT printf("��ũ�� ��� ���� ����\n")	//���ڿ� ��ũ�� ���

int main(void)
{
	double radius = 2.83;

	printf("�ѱ��α�: %d��\n", KPOP); //������ ���� 50000000���� ��ü
	printf("�� ����: %f\n", radius * radius * PI); //���������� PI�� 3.14�� ��ü
	PRT; //���������� PRT�� printf("��ũ�� ��� ���� ����\n")�� ��ü

	return 0;
}