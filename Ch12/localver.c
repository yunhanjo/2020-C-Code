// file: localver.c
#include <stdio.h>

void sub(int param);

int main(void)
{
	//�������� ����
	auto int n = 10;
	printf("%d\n", n);

	//m, sum�� for �� ������ ��� ��������
	for (int m = 0; sum = 0; m < 3; m++)
	{
		sum += m;
		printf("\t%d %d\n", m, sum);
	}

	printf("%d\n", n); // n ���� ����
	//printf("%d %d\n", m, sum); //m, sum ���� �Ұ���

	//�Լ�ȣ��
	sub(20);

	return 0;
}

//�Ű������� param�� ���� ������ ���� ���
void sub(int param)
{
	//�������� local
	auto int local = 100;
	printf("\t%d %d\n", param, local); //param�� local ���� ����
	//printf("%d\n", n); //n ���� �Ұ���
}