// file : staticgvar.c
#include <stdio.h>

//���� �������� ����
static int svar;
//�������� ����
int gvar;

//�Լ� ����
void increment();
void testglobal();
//void teststatic();

int main(void)
{
	for (int count = 1; count <= 5; count++)
		increment();
	printf("�Լ� increment()�� �� %d�� ȣ��Ǿ����ϴ�. \n", svar);

	testglobal();
	printf("���� ����: %d\n", gvar);
	//teststatic();
}

//�Լ� ����
void increment()
{
	svar++;
}