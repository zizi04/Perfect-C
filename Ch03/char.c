/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch03 / Prj07 / char.c
	������ ������ ����� �̿�
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	char c1 = 'a';		//�ҹ��� a
	char c2 = 65;		//�빮�� A�� �ڵ� �� 65
	char c3 = '\132';	//�빮�� Z�� 8���� �ڵ� �� 132
	char c4 = '\x5A';	//�빮�� Z�� 16���� �ڵ� �� 5A

	printf("���� ��(����): %c %c %c %c\n", c1, c2, c3, c4);
	printf("���� ��(����): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}
