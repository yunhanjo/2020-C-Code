// file gets.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char line[101]; //char *line ���δ� �����߻�

	printf("�Է��� �����Ϸ��� ���ο� �࿡�� (ctrl+z)�� �����ʽÿ�.\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");

	return 0;
}