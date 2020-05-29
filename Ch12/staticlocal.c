// file: staticlocal.c
#include <stdio.h>

void increment(void); //�Լ�����

int main(void)
{
	//�ڵ� ��������
	for (int count = 0; count < 3; count++)
		increment();	//3�� �Լ�ȣ��
}

void increment(void)
{
	static int sindex = 1;	//���� ��������
	auto int aindex = 1;	//�ڵ� ��������

	printf("���� �������� sindex: %2d,\t", sindex++);
	printf("�ڵ� �������� aindex: %2d\n", aindex++);
}