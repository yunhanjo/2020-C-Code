// file : strarray.c
#include <stdio.h>

int main(void)
{
	char* pa[] = { "JAVA", "C#", "C++" };
	char ca[][5] = { "JAVA", "C#", "C++" };

	//������ 3�� ���ڿ� ���
	//pa[0][2] = 'v';  //���� ���� �߻�
	//ca[0][2] = 'v';  //���� ����
	printf("%s ", pa[0]); printf("%s ", pa[1]); printf("%s\n", pa[2]);
	printf("%s ", ca[0]); printf("%s ", ca[1]); printf("%s\n", ca[2]);

	//���� ���
	printf("%c %c %c\n", pa[0][1], pa[1][1], pa[2][1]);
	printf("%c %c %c\n", ca[0][1], ca[1][1], ca[2][1]);

	return 0;
}