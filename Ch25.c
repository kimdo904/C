// ���ȣ�� �Լ�

// ��� : ���� �ڱ� �ڸ��� ����. ȸ���ϴ�.
// ����Լ� : �Լ� ������ �ڱ� �ڽ��� ȣ���Ѵ�.

// ���丮�� �Լ�
//#include <stdio.h>

//int factorial(int n) {
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
// n�� 0 �϶��� 1�� ��ȯ�ϰ� �� �ܿ��� n�� factorial(n-1)�� ���� ���� ��ȯ�Ѵ�.
//int main() {
//	int n = 5;
//	int result = factorial(n);
//	printf("%d = %d\n", n, result);
//
//}

//int factorial(int n) {
//	while (n != 0)
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int main() {
//	int n = 5;
//	int result = factorial(n);
//	printf("%d = %d\n", n, result);
//}

// �Ǻ���ġ
//#include <stdio.h>
//
//long long int fibonacci(int n) {
//	if (n <= 1)
//	{
//		return n;
//	}
//	else
//	{
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}
//
//int main() {
//	int n, j;
//
//	printf("�� ���� �Ǻ���ġ ������ �����ұ��?");
//	scanf_s("%d", &n);
//
//	printf("�Ǻ���ġ ���� : ");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%lld", fibonacci(i));
//	}
//}

//#include <stdio.h>
//
//void sayHello() {
//	printf("Hello\n");
//	sayHello();
//}
//
//int main() {
//	sayHello();
//
//	return 0;
//}

// ����Լ��� count ������ �δ°� ����.

//#include <stdio.h>
//// count�� ���� ������ ���� �Ű�����
//int sayHello(int count) {
//	printf("Hello\n");
//	
//	// count�� 50�� �Ǹ� �� �̻� ���ȣ���� ���� ���ϰ� ���´�.
//	if (count != 50)
//	{
//		sayHello(count - 1);
//	}
//	
//}
//
//int main() {
//	sayHello(100);
//
//	return 0;
//}

// ����

// �ڿ��� n�� �Է¹޾� 1���� n������ ���� ���ϴ� 'sum'�� ��� ȣ��� ����
//#include <stdio.h>
//
//int sum(int n) {
//	if (n > 0)
//	{
//		return n + sum(n - 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main() {
//	int n;
//	printf("�ڿ��� ����� ���ұ��?");
//	scanf_s("%d", &n);
//
//	int result = sum(n);
//	printf("�ڿ��� %d������ �� : %d\n", n, result);
//
//}

// sum(5) = 5 + sum(4)
//	 = 5 + (4 + sum(3))
//	 = 5 + (4 + (3 + sum(2)))
//	 = 5 + (4 + (3 + (2 + sum(1))))
//	 = 5 + (4 + (3 + (2 + 1)
//	 = 15

// ���� : ����ڷκ��� ���� ���� n�� �Է¹޾Ƽ� n���� 1������ ���ڸ� �������� ����ϴ� �Լ��� �ۼ��Ͻÿ�.
// ������������ ����Լ��� ����Ѵ�.
// ������ ������ �� : '������ ���丮���� ����� �� �����ϴ�.' �� �����Ѵ�.

//#include <stdio.h>
//
//int re_factorial(int n) {
//	if (n > 0)
//	{
//		printf("%d\n", n);
//		re_factorial(n - 1);
//	}
//}
//int main() {
//	int n;
//	printf("���� ���� �Է�>>");
//	scanf_s("%d", &n);
//	if (n < 1)
//	{
//		printf("���� ������ �Է��ϼ���\n");
//	}
//	else
//	{
//		printf("%d���� 1������ ���ڸ� �������� ����մϴ�.\n", n);
//		re_factorial(n);
//	}
//
//}

// ����2 : ������ ���� 2���� �迭�� �־�����.
//int arr[3][4] = {
//	{1,2,3,4},
//	{5,6,7,8},
//	{9,10,11,12}
//};
// �� �迭�� �̿��Ͽ� ������ �۾��� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// 1. �迭 �����͸� ����Ͽ� �迭�� ��� ���Ҹ� ����Ͻÿ�.
//#include <stdio.h>
//#define rows 3
//#define cols 4
//
//int main() {
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
// 
//#include <stdio.h>
//
//int main() {
//	int arr[3][4] = {
//	{1,2,3,4},
//	{5,6,7,8},
//	{9,10,11,12}
//	};
//
//	// 1. �迭 �����͸� ����Ͽ� �迭�� ���� ���
//	printf("2���� �迭�� ��� ���� : \n");
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	// 2. �迭 �����͸� ����Ͽ� �迭�� �� ���� ���� ����ϰ� ����Ͻÿ�.
//	printf("�� ���� �� \n");
//	for (int i = 0; i < 3; i++)
//	{
//		int row_sum = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			row_sum += arr[i][j];
//		}
//		printf("�� %d�� �� : %d\n", i + 1, row_sum);
//	}
//
//	// 3. �迭 �����͸� ����Ͽ� �迭�� �� ���� ����� ����ϰ� ����Ͻÿ�.(����� �Ҽ������� �޾ƾ� �Ѵ�.)
//	printf("�� ���� �� \n");
//	for (int j = 0; j < 4; j++)
//	{
//		int col_sum = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			col_sum += arr[i][j];
//		}
//		double col_avg = (double)col_sum / 3.0;
//		printf("�� %d�� ��� : %.2lf\n", j + 1, col_avg);
//	}
//}
