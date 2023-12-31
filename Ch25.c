// 재귀호출 함수

// 재귀 : 원래 자기 자리로 가다. 회귀하다.
// 재귀함수 : 함수 내에서 자기 자신을 호출한다.

// 팩토리얼 함수
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
// n이 0 일때는 1을 반환하고 그 외에는 n과 factorial(n-1)을 곱한 값을 반환한다.
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

// 피보나치
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
//	printf("몇 개의 피보나치 수열을 생성할까요?");
//	scanf_s("%d", &n);
//
//	printf("피보나치 수열 : ");
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

// 재귀함수는 count 변수를 두는게 좋다.

//#include <stdio.h>
//// count는 종료 조건을 위한 매개변수
//int sayHello(int count) {
//	printf("Hello\n");
//	
//	// count가 50이 되면 더 이상 재귀호출을 하지 못하게 막는다.
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

// 문제

// 자연수 n을 입력받아 1부터 n까지의 합을 구하는 'sum'을 재귀 호출로 구현
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
//	printf("자연수 몇까지 더할까요?");
//	scanf_s("%d", &n);
//
//	int result = sum(n);
//	printf("자연수 %d까지의 합 : %d\n", n, result);
//
//}

// sum(5) = 5 + sum(4)
//	 = 5 + (4 + sum(3))
//	 = 5 + (4 + (3 + sum(2)))
//	 = 5 + (4 + (3 + (2 + sum(1))))
//	 = 5 + (4 + (3 + (2 + 1)
//	 = 15

// 문제 : 사용자로부터 양의 정수 n을 입력받아서 n부터 1까지의 숫자를 역순으로 출력하는 함수를 작성하시오.
// 무조건적으로 재귀함수를 써야한다.
// 음수로 시작할 시 : '음수는 팩토리얼을 계산할 수 없습니다.' 가 떠야한다.

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
//	printf("양의 정수 입력>>");
//	scanf_s("%d", &n);
//	if (n < 1)
//	{
//		printf("양의 정수를 입력하세요\n");
//	}
//	else
//	{
//		printf("%d부터 1까지의 숫자를 역순으로 출력합니다.\n", n);
//		re_factorial(n);
//	}
//
//}

// 문제2 : 다음과 같은 2차원 배열이 주어졌다.
//int arr[3][4] = {
//	{1,2,3,4},
//	{5,6,7,8},
//	{9,10,11,12}
//};
// 이 배열을 이용하여 다음의 작업을 수행하는 프로그램을 작성하시오.

// 1. 배열 포인터를 사용하여 배열의 모든 원소를 출력하시오.
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
//	// 1. 배열 포인터를 사용하여 배열의 원소 출력
//	printf("2차원 배열의 모든 원소 : \n");
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	// 2. 배열 포인터를 사용하여 배열의 각 행의 합을 계산하고 출력하시오.
//	printf("각 행의 합 \n");
//	for (int i = 0; i < 3; i++)
//	{
//		int row_sum = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			row_sum += arr[i][j];
//		}
//		printf("행 %d의 합 : %d\n", i + 1, row_sum);
//	}
//
//	// 3. 배열 포인터를 사용하여 배열의 각 열의 평균을 계산하고 출력하시오.(평균은 소수점까지 받아야 한다.)
//	printf("각 열의 합 \n");
//	for (int j = 0; j < 4; j++)
//	{
//		int col_sum = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			col_sum += arr[i][j];
//		}
//		double col_avg = (double)col_sum / 3.0;
//		printf("행 %d의 평균 : %.2lf\n", j + 1, col_avg);
//	}
//}
