//file : getche.c
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("���ڸ� ��� �Է��ϰ� Enter�� ������ >>\n");
	while ((ch = getchar()) != 'q')
		putchar(ch);

	printf("\n���ڸ� ���� ������ �� �� ��� >>\n");
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("\n���ڸ� ������ �� �� ��� >>\n");
	while ((ch = _getch()) != 'q')
		_putch(ch);
	printf("\n");

	return 0;
}