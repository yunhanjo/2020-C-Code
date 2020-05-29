// file: bank.c
#include <stdio.h>

//��������
int total = 10000;

//�Ա� �Լ�����
void save(int);
//��� �Լ�����
void withdraw(int);

int main(void)
{
	printf(" �Աݾ�  ��ݾ�   ���Աݾ�   ����ݾ�     �ܰ�\n");
	printf("===================================\n");
	printf("%46d\n", total);
	save(50000);
	withdraw(30000);
	save(60000);
	withdraw(20000);
	printf("===================================\n");

	return 0;
}

//�Աݾ��� �Ű������� ���
void save(int money)
{
	//���Աݾ��� ����Ǵ� ���� ��������
	static int amount;
	total += money;
	amount += money;
	printf("%7d %17d %20d\n", money, amount, total);
}

//��ݾ��� �Ű������� ���
void withdraw(int money)
{
	//����ݾ��� ����Ǵ� ���� ��������
	static int amount;
	total -= money;
	amount += money;
	printf("%15d %20d %9d\n", money, amount, total);
}