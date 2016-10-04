// file: advancemacro.c 

#include <stdio.h> 

#define MESSAGE "���α׷������ �н��� �Ϲݾ���� �н��� \
					���� �ݺ��н��� �߿��ϴ�"

#define PI			3.141592  				//PI�� 3.14�� ��ġ�ϴ� ������
#define VOLUME(r)	(4 * PI * CUBE(r) / 3)	//���� ü���� ���ϴ� ��ũ��
#define SQUARE(x)	( (x) * (x) )			//���� x�� ���� ���ϴ� ��ũ��
#define CUBE(x)		( SQUARE(x) * (x) )		//���� x�� ������ ���ϴ� ��ũ��
#define MULT(x, y)	( (x) * (y) )			//���� x, y�� �� ���ϴ� ��ũ��

int main(void)
{
	double radius = 2.32;
	printf("�������� %.2lf�� ���� ü���� %.2lf �Դϴ�.\n", radius, VOLUME(radius));
	printf("�Ǽ� %.2f�� ������ %.2f �Դϴ�.\n", 4.29, SQUARE(4.29));
	printf("�Ǽ� %.2f�� ������ %.2f �Դϴ�.\n", 3.0, CUBE(3.0));
	printf("�Ǽ� %.2f�� �Ǽ� %.2f�� ���� %.2f�Դϴ�.\n", 2.78, 3.62, MULT(2.78, 3.62));
	puts(MESSAGE);

	return 0;
}
