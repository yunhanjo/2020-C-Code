// file: structpointer
#include <stdio.h>

struct lecture
{
	char name[20];	//���¸�
	int type;		//���±��� 0: ����, 1: �Ϲݼ���, 2:�����ʼ�. 3:��������
	int credit;		//����
	int hours;		//�ü�
};
typedef struct lecture lecture;

//������ ���� ���ڿ�
char* head[] = { "���¸�", "���±���", "����", "�ü�" };
//���� ������ ���� ���ڿ�
char* lectype[] = { "����", "�Ϲݼ���", "�����ʼ�", "��������" };

int main(void)
{
	lecture os = { "�ü��", 2, 3, 3 };
	lecture c = { "C���α׷���", 3, 3, 4 };
	lecture* p = &os;

	printf("����üũ��: %d, ������ũ��: %d\n\n", sizeof(os), sizeof(p));
	printf("%10s %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	printf("%12s %10s %5d %5d\n", p->name, lectype[p->type], p->credit, p->hours);

	//������ ����
	p = &c;
	printf("%12s %10s %5d %5d\n", (*p).name, lectype[(*p).type], (*p).credit, (*p).hours);
	printf("%12c %10s %5d %5d\n", *c.name, lectype[c.type], c.credit, c.hours);

	return 0;
}