// file: typedef.c
#include <stdio.h>

//�Լ� �ܺο��� ���ǵ� �ڷ����� ���� ���Ͽ��� ��� ����
typedef unsigned int budget;

int main(void)
{
	//���ο� �ڷ��� budget ���
	budget year = 24500000;

	//�Լ� ���ο��� ���ǵ� �ڷ����� ���� �Լ����ο����� ��� ����
	typedef int profit;
	//���ο� �ڷ��� profit ���
	profit month = 4600000;

	printf("�� ������ %d, �̴��� ������ %d�Դϴ�.\n", year, month);

	return 0;
}

void test(void)
{
	//���ο� �ڷ��� budget ���
	budget year = 24500000;

	//profit�� �� �Լ������� ��� �Ұ�, ���� �߻�
	//profit year;
}