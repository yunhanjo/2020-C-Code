//file : chararray.c
#include <stdio.h>

int main(void)
{
	//���� ����� ���
	char ch = 'A';
	printf("%c %d\n", ch, ch);

	//���ڿ� ���� ���1
	char java[] = { 'J', 'A', 'V', 'A', '\0' };
	printf("%s\n", java);
	//���ڿ� ���� ���2
	char c[] = "C language";
	printf("%s\n", c);
	//���ڿ� ���� ���3
	char csharp[5] = "C#";
	printf("%s\n", csharp);

	//���� �迭���� ���� ���
	printf("%c%c\n", csharp[0], csharp[1]);

	return 0;
}