// basicoutput.c: 

#include <stdio.h>

int main(void)
{
	int age = 20;
	double gpa = 3.88f;
	char gender = 'M';
	float weight = 62.489F;

	printf("����: %c\n", gender);
	printf("�̸�: %s\n", "�� ����");
	printf("����: %d\n", age);
	printf("������: %.2f\n", weight);
	printf("�������(GPA): %.3f\n", gpa);

	return 0;
}