//file : stringput.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20], dept[30]; //char *name, *dept; ���� ���� �߻�

	printf("%s", "�а� �Է� >> ");
	scanf("%s", dept);
	printf("%s", "�̸� �Է� >> ");
	scanf("%s", name);
	printf("���: %10s %10s\n", dept, name);

	return 0;
}