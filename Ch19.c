// 다차원 배열

// 다차원 배열은 2차원 이상의 배열을 의미한다. 
// 실질적으로 사용하는 배열은 2차원, 3차원 배열이다.

// int arr[10];	// 길이가 10인 1차원 배열
// int arr[5][3]	// 세로 길이가 5, 가로 길이가 3인 2차원 배열
// int arr[2][3][4]	// 높이가 2, 세로길이가 3, 가로길이가 4인 3차원 배열

//#include <stdio.h>
//
//int main() {
//	int arr[2][3] = { {1,2,3}, {4,5,6} };
//
//	// 배열의 모든 요소 출력
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
//	// 배열의 요솟값을 모두 10으로 변경
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
//	// 다시 배열의 모든 요소 출력
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d\n", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

// 다차원 배열 인수

//#include <stdio.h>
//
//// #define : C언어에서 전처리기 지시문이다. 컴파일 과정 이전에 생성되며 주로 상수, 매크로 함수 등을 정의하는데 사용한다.
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
//	printf("총 매출은 %d\n", total_sale);
//}

// 문제

//#include <stdio.h>
//#define Class 3
//#define Student 5
//
//// 학급의 평균성적을 구하고, 전체 학생들의 평균성적도 구하시오.
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
//		printf("학급 %d의 평균성적 : %d\n", i, subtotal /Student);
//		total += subtotal;
//	}
//	printf("전체 학생들의 평균성적 = %d\n", total / (Class * Student));
//}

// 문제2
// 
// 배열을 이용해서 데이터를 저장하시오. 예)array[0] 는 1이 들어가고 이후에 +1 되도록 한다.
// 배열을 이용해서 데이터를 출력

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

// 문제3
// 배열을 이용해서 데이터를 저장하시오. 예)array[0] 는 1이 들어가고 이후에 +1이 되도록 한다.
// 배열을 이용해서 데이터를 출력

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

// 다음은 2차원 배열과 관련된 문제

// 크기가 3 x 3 인 2차원 배열을 선언하고, 사용자로부터 9개의 정수 값을 입력받아 배열에 저장한 뒤, 배열에 저장된 값들을 출력하는 프로그램을 작성하세요.

// 예시 : 

// 정수 9개를 입력하세요.

// 1 2 3
// 4 5 6
// 7 8 9

// 배열에 저장된 값 : 
// 1 2 3
// 4 5 6
// 7 8 9

//#include <stdio.h>
//
//int main(void) {
//	int arr[3][3];
//	int i, j;
//
//	printf("정수 9개를 입력하세요.\n");
//
//	// 9개의 정수 값을 입력받아 배열에 저장
//	for (int i = 0; i < 3; i++)
//	{
//		for (int  j = 0; j < 3; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//			// &arr : 배열 전체를 가리키는 주소가 된다.
//			// arr : 배열의 첫 번째 요소를 가리키는 주소가 된다. 1차원 배열을 가리키는 포인터이다.
//			// &를 빼면 안되는 경우 : 포인터의 자료형이 다르게 되므로 컴파일러는 오류를 발생시키게 된다. 혹은 런타임 에러가 발생할 수 있다. &를 빼면 2차원 배열의 포인터와 1차원 배열의 포인터 간에 형태가 일치하지 않아 일어나는 문제이다.
//		}
//	}
//	// 배열에 저장된 값들을 출력
//	printf("\n배열에 저장된 값 :\n");
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