// file: gfunc.c

void teststatic()
{
	//���� ���������� ���� �� ��� �Ұ���
	//extern svar;
	//svar = 5;
}

void testglobal()
{
	//���������� ���� �� ��� ����
	extern gvar;
	gvar = 10;
}