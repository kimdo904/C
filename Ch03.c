// (�ڷ�)�� ��ȯ\

// �ڵ�����ȯ(�Ͻ�������ȯ) : �����Ϸ�(��ǻ��)�� ���� �ڵ�����ȯ
// ��������ȯ(���������ȯ) : ���α׷��ӿ� ���� ���� ����ȯ

// 01 �ڵ�����ȯ
// �ڷ��� ��ȯ�� ������ �սǰ��ɼ��� ���� �� �����Ϸ�(C��� ���α׷�)�� ���� �ڵ����� �ڷ��� ��ȯ
// ex) ū ���� = ���� ��

// �ڵ�����ȯ ����
// char < short < int < long < long long < float < double

//# include <stdio.h>
//int main() {
//	short svar = 10;
//	int ivar = svar;	// �ڵ�����ȯ(ū���� == ���� ��)
//	printf("invar=%d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar;
//	printf("ivar = %d\n", ivar);
//
//	long long Ivar = ivar;	//(����) �ڵ�����ȯ�� �Ǳ�� �ϳ� ���� ����� �ƴϴ�. ���� ���̰� �ʹ� ũ��.
//	printf("Ivar=%d\n", Ivar);
//
//	float fvar = Ivar;
//	printf("fvar = %fv\n", fvar);
//
//	double dvar = Ivar;
//	printf("dvar = %f\n", dvar);
//}

// 02 ��������ȯ
// ���α׷��ӿ� ���� Ư���� �ڷ������� ���� ����ȯ �ϴ� ���
// ���� : ������ �ս� ���ɼ��� ����.


//#include <stdio.h>
//int main()
//{
//	// int : �� -21�� ~ +21�����	short : 2����Ʈ, �� -32000 ~ +32000		char : -128 ~ +127
//	int ivar = 50000;
//	short svar = (short)ivar;	// ���� ����ȯ
//	char cvar = (char)ivar;		// ���� ����ȯ
//	printf("svar = %d\n", svar);
//	printf("cvar = %d\n", cvar);
//}

 //03 ����� �ڵ�(����) ����ȯ(������)

//#include <stdio.h>
//int main() {
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	double r2 = (float)num / div;
//
//	printf("r1 = %f\n", r1);
//	printf("r2 = %f\n", r2);
//
//}