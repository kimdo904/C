// ������ �迭

// ������ �迭�� 2���� �̻��� �迭�� �ǹ��Ѵ�. 
// ���������� ����ϴ� �迭�� 2����, 3���� �迭�̴�.

// int arr[10];	// ���̰� 10�� 1���� �迭
// int arr[5][3]	// ���� ���̰� 5, ���� ���̰� 3�� 2���� �迭
// int arr[2][3][4]	// ���̰� 2, ���α��̰� 3, ���α��̰� 4�� 3���� �迭

//#include <stdio.h>
//
//int main() {
//	int arr[2][3] = { {1,2,3}, {4,5,6} };
//
//	// �迭�� ��� ��� ���
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d\n", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main() {
//	int arr[2][3] = { {1,2,3}, {4,5,6} };
//
//	// �迭�� ��ڰ��� ��� 10���� ����
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			arr[i][j] = 10;
//		}
//		printf("\n");
//	}
//}

//#include <stdio,h>
//
//int main() {
//	int arr[2][3] = { {1,2,3}, {4,5,6} };
//
//	// �ٽ� �迭�� ��� ��� ���
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d\n", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

// ������ �迭 �μ�

//#include <stdio.h>
//
//// #define : C���� ��ó���� ���ù��̴�. ������ ���� ������ �����Ǹ� �ַ� ���, ��ũ�� �Լ� ���� �����ϴµ� ����Ѵ�.
//
//#define years 3
//#define products 5
//
//int sum(int grade[years][products]) {
//	int y, p;
//	int total = 0;
//	for (int y = 0; y < years; y++)
//	{
//		for (int p = 0; p < products; p++)
//		{
//			total += grade[y][p];
//		}
//	}
//	return total;
//}
//
//int main() {
//	int sales[years][products] = { {1,2,3}, {4,5,6}, {7,8,9} };
//	int total_sale;
//	total_sale = sum(sales);
//	printf("�� ������ %d\n", total_sale);
//}

// ����

//#include <stdio.h>
//#define Class 3
//#define Student 5
//
//// �б��� ��ռ����� ���ϰ�, ��ü �л����� ��ռ����� ���Ͻÿ�.
//int main() {
//	int s[Class][Student] = { {0,1,2,3,4}, {10,11,12,13,14}, {20,21,22,23,24} };
//	int total, subtotal;
//	total = 0;
//	for (int i = 0; i < Class; i++)
//	{
//		subtotal = 0;
//		for (int j = 0; j < Student; j++)
//		{
//			subtotal += s[i][j];
//		}
//		printf("�б� %d�� ��ռ��� : %d\n", i, subtotal /Student);
//		total += subtotal;
//	}
//	printf("��ü �л����� ��ռ��� = %d\n", total / (Class * Student));
//}

// ����2
// 
// �迭�� �̿��ؼ� �����͸� �����Ͻÿ�. ��)array[0] �� 1�� ���� ���Ŀ� +1 �ǵ��� �Ѵ�.
// �迭�� �̿��ؼ� �����͸� ���

//# include <stdio.h>
//#define MAX_SIZE 10
//int main() {
//	int array[MAX_SIZE];
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		array[i] = i + 1;
//		printf("%d\n", array[i]);
//	}
//}

// ����3
// �迭�� �̿��ؼ� �����͸� �����Ͻÿ�. ��)array[0] �� 1�� ���� ���Ŀ� +1�� �ǵ��� �Ѵ�.
// �迭�� �̿��ؼ� �����͸� ���

//#include <stdio.h>
//
//#define ROWS 3
//#define COLS 4
//
//int main() {
//	int array[ROWS][COLS];
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			array[i][j] = (COLS*i) + j + 1;
//		}
//	}
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			printf("%d\n", array[i][j]);
//		}
//	}
//}

// ������ 2���� �迭�� ���õ� ����

// ũ�Ⱑ 3 x 3 �� 2���� �迭�� �����ϰ�, ����ڷκ��� 9���� ���� ���� �Է¹޾� �迭�� ������ ��, �迭�� ����� ������ ����ϴ� ���α׷��� �ۼ��ϼ���.

// ���� : 

// ���� 9���� �Է��ϼ���.

// 1 2 3
// 4 5 6
// 7 8 9

// �迭�� ����� �� : 
// 1 2 3
// 4 5 6
// 7 8 9

//#include <stdio.h>
//
//int main(void) {
//	int arr[3][3];
//	int i, j;
//
//	printf("���� 9���� �Է��ϼ���.\n");
//
//	// 9���� ���� ���� �Է¹޾� �迭�� ����
//	for (int i = 0; i < 3; i++)
//	{
//		for (int  j = 0; j < 3; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//			// &arr : �迭 ��ü�� ����Ű�� �ּҰ� �ȴ�.
//			// arr : �迭�� ù ��° ��Ҹ� ����Ű�� �ּҰ� �ȴ�. 1���� �迭�� ����Ű�� �������̴�.
//			// &�� ���� �ȵǴ� ��� : �������� �ڷ����� �ٸ��� �ǹǷ� �����Ϸ��� ������ �߻���Ű�� �ȴ�. Ȥ�� ��Ÿ�� ������ �߻��� �� �ִ�. &�� ���� 2���� �迭�� �����Ϳ� 1���� �迭�� ������ ���� ���°� ��ġ���� �ʾ� �Ͼ�� �����̴�.
//		}
//	}
//	// �迭�� ����� ������ ���
//	printf("\n�迭�� ����� �� :\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}