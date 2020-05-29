// file: globalvar.c
#include <stdio.h>

double getArea(double);
double getCircum(double);

//�������� ����
double PI = 3.14;
int gi;

int main(void)
{
	//�������� ����
	double r = 5.87;
	//�������� PI�� ���� �̸��� �������� ����
	const double PI = 3.141592;

	printf("����: %.2f\n", getArea(r));
	printf("�ѷ�1: %.2f\n", 2 * PI * r);
	printf("�ѷ�2: %.2f\n", getCircum(r));
	printf("PI: %f\n", PI); 	//�������� PI ����
	printf("gi: %d\n", gi); 	//�������� gi �⺻��

	return 0;
}

double getArea(double r)
{
	return r * r * PI;	//�������� PI ����
}