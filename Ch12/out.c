// file:out.c
#include <stdio.h>

void outfunction()
{
	extern int global, sglobal;

	printf("\t\t%d\n", ++global);

	//�ܺ� ���Ͽ� ����� ���� ���������̹Ƿ� ���� �� ����
	//printf("%d\n", ++global);
}