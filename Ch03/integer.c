/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch03 / Prj05 / integer.c
	������ �ڷ��� ������ ����� Ȱ��
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	short sVar = 32000;			//-32767���� 32767����
	int   iVar = -2140000000;	//�� 21�� �������� ���� ����

	unsigned short int	usVar = 65000;		//0���� 65535���� ���� ����
	unsigned int		uiVar = 4280000000;	//�� 0���� 42�� �������� ���� ����

	printf("���� ��: %d %d\n", sVar, iVar);
	printf("���� ��: %u %u\n", usVar, uiVar);

	long long dist1 = 2720000000000; //������ õ�ռ� ���� �Ÿ�(km) 27�� 2õ
	__int64 dist2 = 4500000000000; //�¾�� �ؿռ� ���� �Ÿ�(km) 45��

	printf("������ õ�ռ� ���� �Ÿ�(km): %lld\n", dist1);
	printf("�¾�� �ؿռ� ���� �Ÿ�(km): %lld\n", dist2);

	return 0;
}
