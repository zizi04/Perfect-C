// basictype.c: �� ������ ��, �� �Ǽ��� �� ��� 

#include <stdio.h>

int main(void)
{
	int a = 30, b = 43; //�� ���� ����� �ʱ� �� ���� 
	int sum;			//�� ������ ���� ������ ���� ���� 
	sum = a + b;		//�� ������ �� ���ϱ�

	double x = 38.342, y = 45.345;	//�� �Ǽ� ����� �ʱ� �� ���� 
	double difference;				//�� �Ǽ��� ���� ������ ���� ���� 
	difference = x - y;				//�� �Ǽ��� �� ���ϱ�

	printf("��: %d\n", sum);		//�� ������ �� ���
	printf("��: %f\n", difference);	//�� �Ǽ��� �� ���

	return 0;
}
