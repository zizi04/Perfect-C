// minmaxfloat.c: �ε��Ҽ��� �������� �ִ� �ּ� ��� ��� 

#include <stdio.h>
#include <float.h>		//�ε��Ҽ��� ����� ���ǵ� ������� ����

int main(void)
{
	printf("float ����: %e %e\n", FLT_MIN, FLT_MAX);
	printf("double ����: %e %e\n", FLT_MIN, FLT_MAX);
	printf("long double ����: %e %e\n", LDBL_MIN, LDBL_MAX);

	return 0;
}
