// ��ü ������
// 2�� ~ 9�ܱ��� ��� 1��

//#include <stdio.h>
//int main() {
//	int num = 2;
//	while (num<=9)	// 2�ܺ��� 9�ܱ��� �ݺ�
//	{
//		printf("%d��\n", num);
//		int i = 1;
//		while (i<=9)	// ���ϴ� ���� 1���� 9���� �ݺ�
//		{
//			printf("%d x %d = %d\n", num, i, num * i);
//			i++;
//		}
//		printf("\n");	// �� �ܸ��� �� �� ���
//		num++;
//	}
//}

// 2�� 2�� ���� ���
//#include <stdio.h>
//int main() {
//	int i = 9;
//	printf("2�� ���� ���\n");
//	while (i>=1)
//	{
//		printf("2 x %d = %d\n", i, 2 * i);
//		i--;
//	}
//}

// ������ ���� ���
//#include <stdio.h>
//int main() {
//	int num = 9;
//	while (num >=2)	// 2�ܺ��� 9�ܱ��� �ݺ�
//	{
//		printf("%d��\n", num);
//		int i = 9;
//		while (i >=1)	// ���ϴ� ���� 1���� 9���� �ݺ�
//		{
//			printf("%d x %d = %d\n", num, i, num * i);
//			i--;
//		}
//		printf("\n");	// �� �ܸ��� �� �� ���
//		num--;
//	}
//}

//#include <stdio.h>
//int main() {
//	int i = 1;	// ������
//	int j = 1;	// ������
//
//	while (i<4)
//	{
//		j = 1;
//		while (j < 5)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}

// ����1 : ���̸� �Է¹޾� ���̸�ŭ�� �ﰢ�� ���

// ��� ��
// ���� : 3
// *
// **
// ***

//#include <stdio.h>
//int main() {
//	int n = 0;
//	printf("���� �Է�>>");
//	scanf_s("%d", &n);
//	int i = 0;	//��
//	while (i<n)
//	{
//		int j = 0;	//��
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}

// ����2 : ���̸� �Է¹޾� ���̸�ŭ�� �ﰢ�� ���

// ��� ��
// ���� : 3
// ***
// **
// *

//#include <stdio.h>
//int main() {
//	int i = 1, j = 1, num;
//	printf("���� �Է� >>");
//	scanf_s("%d", &num);
//	while (i<=num)
//	{
//		j = num;
//		while (j >= i)
//		{
//			printf("*");
//			j--;
//		}
//		printf("\n");
//		i++;
//	}
//}


// ����3 : �Ʒ��� ���� ���̸� �Է¹����� ���̸�ŭ ���ﰢ���� ��µǵ��� �Ͻÿ�.

//   *
//  ***
// *****
//*******



//#include<stdio.h>
//int main() {
//	int height;
//	printf("���� �Է� >>>");
//	scanf_s("%d", &height);
//
//	int i = 0;
//	while (i<height)
//	{
//		int j = 0;
//		while (j <= height - i -1)
//		{
//			printf(" ");
//			j++;
//		}
//
//		int k = 0;
//		while (k < 2* i + 1)
//		{
//			printf('*');
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}

//#include <stdio.h>
//int main() {
//	int height;
//	printf("���̸� �Է��ϼ���>>>");
//	scanf_s("%d", &height);
//
//	int i = 0;
//	while (i<height)	// �� �� ������(���̸�ŭ)
//	{
//		int j = 0;
//		// ������ ���� ���� while�̴�.
//		while (j < height -i -1)
//		{
//			printf(" ");
//			j++;
//		}
//
//		int k = 0;
//
//		// ���� ��� ���� while�̴�.
//		while (k< 2 * i + 1)
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}