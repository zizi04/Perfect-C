// file: printfintro.c

#include <stdio.h>

int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("Hello!\n");
	printf("printf() ��ȯ ��(��µ� ���ڼ�): %d\n", ret_value);

	ret_value = printf("��� ��: %d %i %o %#o %#x %#X\n", n, n, n, n, n, n);
	printf("��ȯ ��(��µ� ���ڼ�): %d\n", ret_value);

	printf("%d %i\n", 16, 16); //16 16 ��� 
	printf("%o %#o\n", 16, 16);//20 020 ������ ���
	printf("%x %#x %#X\n", 10, 10, 10);//a 0xa 0XA �������� ���

	return 0;
}
