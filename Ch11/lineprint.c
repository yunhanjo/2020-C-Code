// lineprint.c:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[100];
	//���ڹ迭 s�� ǥ���Է��� �� ���� ����
	gets(s);

	//���ڹ迭�� ����� �� ���� ���
	char* p = s;
	while (*p)
		printf("%c", *p++);
	printf("\n");

	return 0;
}