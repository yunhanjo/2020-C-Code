// file: structbasi.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//���� ���¸� ���� ����ü ����
struct account
{
	char name[12];	//������ �̸�
	int actnum;	//���¹�ȣ
	double balance;	//�ܰ�
};

int main(void)
{
	//����ü ���� ���� �� �ʱ�ȭ
	struct account mine = { "ȫ�浿", 1001, 300000 };
	struct account yours;

	strcpy(yours.name, "�̵���");
	//strcpy_s(yours.name, 12, "�̵���"); //����
	//yours.name = "�̵���"; //����
	yours.actnum = 1002;
	yours.balance = 500000;

	printf("����üũ��: %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	return 0;
}