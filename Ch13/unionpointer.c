// file: unionpointer.c
#include <stdio.h>

int main(void)
{
	//����ü union data ����
	union data
	{
		char ch;
		int cnt;
		double real;
	};

	//���Ͽ� union data�� �ٽ� �ڷ��� udata�� ����
	typedef union data udata;

	//udata ������ value�� ������ p ����
	udata value, * p;

	p = &value;
	p->ch = 'a';
	printf("%c %c\n", p->ch, (*p).ch);
	p->cnt = 100;
	printf("%d ", p->cnt);
	p->real = 3.14;
	printf("%.2f \n", p->real);

	return 0;
}