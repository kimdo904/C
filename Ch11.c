// 01 for��(�⺻)

// for ���� C���� �����ϴ� �ݺ��� �� �ϳ���, �ݺ� Ƚ���� �̸� ���س��� �ݺ��� �����ϴ� �����̴�.

// for (�ʱ��; ���ǽ�; ������;){
//		// ���ǽ��� ���� ���� ������ �ڵ�
//}

// for ���� ������ ���� �����Ѵ�.
// 1. �ʱ���� ���� �����Ѵ�. �̶� �ʱ�Ŀ��� ����� ������ for���� ������ ���� �� �ִ�.
// 2. ���ǽ��� ���Ѵ�. ���ǽ��� ���̸� �ݺ����� ���� �����Ѵ�. ���ǽ��� �����̸� �ݺ����� �����Ѵ�.
// 3. �ݺ����� ���� �����Ѵ�.
// 4. �������� �����Ѵ�.
// 5. 2��° ������ ���ư� ���ǽ��� ���Ѵ�.���ǽ��� ���̸� �ݺ����� ���� �����Ѵ�. ���ǽ��� �����̸� �ݺ����� �����Ѵ�.

//#include <stdio.h>
//int main() {
//	int i = 0;	// �ʱⰪ
//	//while (i<=10)	// ���ǽ�
//	//{
//	//	printf("i = %d\n", i);
//	//	i++;	//���� ����
//	//}
//	for (int i = 0; i < 10; i++)	// �ʱⰪ; ���ǽ�; ��������
//	{
//		printf("i = %d\n", i);
//	}
//}

//#include <stdio.h> 
//int main() {
//	int sum = 0;
//	for (int i = 1; i < 10; i++)
//	{
//		sum += i;
//	}
//	printf("1���� 10������ �� : %d\n", sum);
//}

// ����
// 1. 1���� N������ ���� ���� ����ϴµ� N�� ���� scanf_s�� ����Ͻÿ�. (for�� ���)
//#include <stdio.h>
//int main() {
//	int i = 0;
//	int N = 0;
//	int sum = 0;
//	printf("���� ������ ���ϰڽ��ϱ�?");
//	scanf_s("%d", &N);
//	for (int i = 0; i<=N; i++)
//	{
//		sum += i;
//	}
//	printf("1���� %d������ �� : %d\n", N, sum);
//}

// 2. N�� ���� �޾Ƽ� N�� �������� ����Ͻÿ�.(for������ �ۼ�)
//#include <stdio.h>
//int main() {
//	int N = 0;
//	int i = 1;
//	printf("�� ���� ���ұ��?");
//	scanf_s("%d", &N);
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d x %d = %d\n", N, i, N * i);
//	}
//}

// 3. 2�ܺ��� 9�ܱ��� ���(for������ �ۼ�)
//#include <stdio.h>
//int main() {
//	int dan = 2;
//	int num = 1;
//	for ( dan = 2; dan <=9; dan++)
//	{
//		for ( num = 1; num <=9; num++)
//		{
//			printf("%d x %d = %d\n", dan, num, dan * num);
//		}
//		printf("\n");
//	}
//}

// 4. ����� ���� (for�� ���)
//*
//**
//***
//****
//*****

//#include <stdio.h>
//int main() {
//	int i = 0;	// ��
//	int j = 0;	// ��
//	for (i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

// 5. ����� ���� (for�� ���)
//*****
//****
//***
//**
//*

//#include <stdio.h>
//int main() {
//	int i = 0;	// ��
//	int j = 0;	// ��
//	for (i = 1; i <= 5; i++)
//	{
//		for (int j = 5; j >= i; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

// ���� 1���� 100������ �� �߿��� Ȧ���� �հ� ¦���� ���� ����Ͻÿ�.

//#include <stdio.h>
//int main() {
//	int i = 0;
//	int evensum = 0;
//	int oddsum = 0;
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 2== 0)
//		{
//			evensum += i;
//		}
//		else
//		{
//			oddsum += i;
//		}
//	}
//	printf("1���� 100������ Ȧ���� ��= %d\n¦���� ��= %d\n", oddsum, evensum);
//}

// ����6. 1���� 100������ ���� �߿��� 3�� 5�� ������� ��, "FizzBuzz", 3�� ����� �� "Fizz", 5�� ����� �� "Buzz"�� ����ϰ�, �� ���� ���ڴ� �״�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//# include <stdio.h>
//int main() {
//	int i = 0;
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 3 ==0)
//		{
//			if (i % 5 ==0)
//			{
//				printf("FizzBuzz\n");
//			}
//			else
//			{
//				printf("Fizz\n");
//			}
//		}
//		else if (i % 5 == 0)
//		{
//			if (i % 3 != 0)
//			{
//				printf("Buzz\n");
//			}
//		}
//		else
//		{
//			printf("%d\n", i);
//		}
//	}
//}

 //����� Ǯ��
//# include <stdio.h>
//int main() {
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)	// 3�� 5�� ������� ���
//		{
//			printf("FizzBuzz\n");
//		}
//		else if (i % 3 == 0)
//		{
//			printf("Fizz\n");
//		}
//		else if (i % 5 == 0)
//		{
//			printf("Buzz\n");
//		}
//		else
//		{
//			printf("%d\n", i);
//		}
//	}
//}

// ����� ����

// 1. �����ﰢ�� ����� -> ������� ����� ���� �� �����ŭ ����Ⱑ �Ǵ� �����̴�.

//#include <stdio.h>
//int main() {
//	int height = 0;
//	printf("���� �׸����?");
//	scanf_s("%d", &height);
//
//	int i = 1;
//	int j = 1;
//	for (int i = 1; i <= height; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
// 2. �� �����ﰢ�� ����� -> ������� ����� ���� �� �����ŭ ����Ⱑ �Ǵ� �����̴�.
//#include <stdio.h>
//int main() {
//	int height = 0;
//	printf("���� �������?");
//	scanf_s("%d", &height);
//
//	int i = 0;
//	int j = height;
//	for (i = height; i >=1; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
// 3. �Ƕ�̵� ����� -> ���̸� �Է¹޾� �Ƕ�̵� ���̸�ŭ ���� ������.
#/*include <stdio.h>
int main() {
	int height = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &height);
	int i = 0;
	for (i = 1; i <= height; i++)
	{
		int j = 0;
		for (j = 1; j <= height - i; j++)
		{
			printf(" ");
		}
		int k = 0;
		for (k = 1; k<= 2 * i -1; k++)
		{
			printf("*");
		}
		printf("\n");
	}	
	
}*/