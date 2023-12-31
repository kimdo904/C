// 01 ���

//10���������͸� ���� ��û ��
//2�� �����ͷ� ���� ��ȯ�Ǿ� �����ϰ� �Ǵµ�
//�̶� 2�� ������ �ϳ��� ��� ���������� ��Ʈ(bit)��� �Ѵ�.

//10���� -> 2����		, �ʿ� ��Ʈ ��
//44	 -> 101100			6
//31	 -> 11111			5		   	
//112	 ->	1110000			7
//59	 -> 111111			6
//58	 -> 111010			6

//2����			-> 10����
//11000001			193
//10101001			169
//11100101			229
//10001010			134
//00111010			58

////����(8��Ʈ)
////1	1	1	1	1	1	1	1	1 
////128	64	32	16	8	4	2	1	= 255	

// 02 ���� ���� ���� ����

//#include <stdio.h>
//int main()
//{
//	//10�� ���Ĺ���
//	printf("10���� : %d\n", 173); //10����
//	printf("10���� : %d\n", 0255); // ���� : 8����
//	printf("10���� : %d\n", 0xad); // ���� : 16����
//
//	//8�� ���Ĺ���
//	printf("8���� : %o\n", 173); //10����
//	printf("8���� : %o\n", 0255); // ���� : 8����
//	printf("8���� : %o\n", 0xad); // ���� : 16����
//
//	//16�� ���Ĺ���
//	printf("16���� : %x\n", 173); //10����
//	printf("16���� : %x\n", 0255); // ���� : 8����
//	printf("16���� : %x\n", 0xad); // ���� : 16����
//}

// 03 ������ ������
// ���� ���� ���
// CPU�� ����ȸ�ΰ� �����Ѵ�. ������ ���������� �����ϴ�.
// CPU�� ����ȸ�δ� �������� �ʴ´�. ������ ���� ������ �Ұ����ϴ�.
// ����ȸ�ΰ� ���� CPU�� ���������� �� �� �ִ� ������ ����ó���� ������������ �ٲ� ó���ϱ� �����̴�.

// 5 - 5 = 0
// 7 - 3 = 4
// 7 + 7 = 14
// 54 - 22 = 32
// 54 + 78 = 32

// 01111111 = 127
// 10000000 = -128
// 10000001 = -127
// 10000010 = -128 + 2 = - 126

// 04 �Ǽ��� ó�����

// �Ҽ������� �� (������)�� �����ϴ� ��
// �Ǽ��� �����ο� ���� ������ ���Ѵ뿡 ������ ������
// ��ǻ�� �޸𸮰����� �Ҽ��� ������ �� ������ �� ��Ƴ��� ���Ѵ�.
// ���� �Ҽ����� 00�ڸ������� ��ȿ������ ���Ͽ� �Ǽ����� �����ϱ� ������ �Ǽ����� ������ �߻��� �� �ۿ� ����.
// �Ǽ����� �Ҽ����� ��ġ�� �����ϴ� ����� ���� �Ҽ��� ��İ� �ε��Ҽ��� ����� �ִ�.
// ���� �Ҽ��� : �Ҽ����� ��ġ�� �̸� ����
// �ε� �Ҽ��� : ���ԵǴ� �����Ͱ��� ���� �Ҽ�����ġ�� ����

// 05 �ڷ��� & ����

// �ڷ��� : Data������ ���� �̸� ����� �����
// ���� �ڷ��� ------------------
// int : 4byte ���� (2147483647) 
// char : 1byte (���� �ϳ��� ���� �� �ִ�. �� �ѱ��� 2byte�������� ��´�.)
// short : 2byte
// long : 8byte (long,long long�� ũ��� �ý��� �� ���� ���̰� �ִ�.)
// long long : 16byte
// �Ǽ� �ڷ��� ------------------
// double : 8byte
// float : 4byte

//#include <stdio.h>
//int main() {
//	int n1;		//���� ���� : 4byte ������������ n1 �̸� �ο�
//
//	n1 = 10;	//���������� �� ����
//				// = (���Կ�����)	����=��(����ó��)
//				// 10�̶�� Data���� ���� ������ �� n1 ������ ����(����)
//
//	printf("%d\n", n1); // ���� ���Ĺ����� �°� ���
//						// �Լ��� ()�ȿ� �������� ���Ǹ� �⺻������ ������ �ؼ�
//						// n1���� ���� %d�� �°� ���
//
//	int n2 = 20;		// ���� �ʱ�ȭ
//						// 20�� ���� ��� Pool�� ������ ����
//						// 4byte ���� �������� �� n2��� �̸��� ���̰� �ʱ�ȭ
//
//	printf("%d\n", n1 + n2); //n1���� �� + n2���� �� %d ���Ŀ� ���� ���
//
//}

// ���� 

////num1������ 10���� �ʱ�ȭ
////num2������ 20���� �ʱ�ȭ
////num3������ ������ �� num1�� num2�� ���� ����
////num4������ ������ �� num2�� num1�� ���� ����
////prinft()�Լ��� ���Ĺ���(%d)�� �̿��ؼ� num3,num4�� ���

//#include <stdio.h>
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int num3;
//	num3 = num1 + num2;
//	int num4;
//	num4 = num2 - num1;
//
//	printf("%d\n%d", num3,num4);
//}

// 05 ���� �ڷ���

//#include <stdio.h>
//
//int main()
//{
//	char n1 = 10;	//�ڷ��� ����ġ
//	short n2 = 20;	//�ڷ��� ����ġ
//	int n3 = 30;	//�ڷ��� ��ġ
//
//}

//06 �Ǽ� �ڷ���

//#include <stdio.h>
//int main() {
//	float var1 = 0.33333333333333F;
//	double var2 = 0.3333333333333333333333;
//
//	printf("%.20f\n", var1);
//	printf("%.20f\n", var2);
//}

// 07 ���� ���� �ڷ���

// ���� ���� ������ ���ؼ� ��ӵ� �ڵ�ǥ�� �����Ͽ� �ش� �ڵ�ǥ�� ������ ��Ʈ���� �����Ų��.
// C���� ASCII�ڵ�ǥ�� �̿��Ѵ�.
// ���� or ���� �簣 ���� ��Ʈ���� ����ȴ�.

//#include <stdio.h>
//int main()
//{
//	char ch1 = 'a';
//	char ch2 = 97;
//	char ch3 = 0b1100001;
//	char ch4 = '!';
//
//	printf("Ch1 = %c\n", ch1);
//	printf("Ch2 = %c\n", ch2);
//	printf("Ch3 = %c\n", ch3);
//	printf("Ch4 = %d\n", ch4);
//
//}

// 08 ���ڿ� ����(�迭)

// ���Ϲ��� : 'a'
// ���ڿ� : "hello" -> h e l l o (6byte �ʿ�)
// �߿�!! ���ڿ��� �������� NULL����(\0)�� �ݵ�� ����
// �迭 : ���� �ڷ������� �������� ���� ����
// char arr[3] -> char ũ�⸦ ��ҷ� 3ĭ¥�� ������ ����

//#include <stdio.h>
//int main()
//{
//	char str1[10] = "hello";
//	char str2[12] = "hello world";
//	char str3[3] = "��"; // �ѱ��� 2����Ʈ�� ������ ������ ����.
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//}

//hint : %s : ���ڿ��̴�.   %d�� ����(���ڸ��޴´�.) %c : �ѱ��ڸ� �޴´�.(�������)

//// �̸�(�ڷ��� char name[10]) : ȫ�浿
//// ����(int age) : 44
//// ����(char gender) : 'M'
//// �ּ�(char addr[100]) : �뱸������ �޼���
////���� �ڷ����� ����/�迭���� �����ؼ�
//// Data���� ���� �� ���Ŀ� ���Ĺ��� �� �����ؼ� printf()
//// �ϼ���
//// ��� �� 
//// 1.�̸� : ȫ���
//// 2.���� : 44��
//// 3.���� : M
//// 4.�ּ� �뱸������ �޼���

//#include <stdio.h>
//int main()
//{
//	char name[10] = "ȫ�浿";
//	int age = 44;
//	char gender = 'M';
//	char addr[100] = "�뱸������ �޼���";
//
//	printf("1.�̸� : %s\n", name);
//	printf("2.���� : %d\n", age);
//	printf("3.���� : %c\n", gender);
//	printf("4.�ּ� : %s", addr);
//}
