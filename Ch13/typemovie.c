// file: typemovie.c
#include <stdio.h>

int main(void)
{
	//��ȭ ���� ����ü
	typedef struct movie
	{
		char* title;	//��ȭ����
		int attendance;	//������
	}movie;

	movie assassination;

	assassination.title = "�ϻ�";
	assassination.attendance = 12700000;

	printf("[%s] ������: %d\n", assassination.title, assassination.attendance);

	return 0;
}