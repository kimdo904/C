// 01 for문(기본)

// for 문은 C언어에서 제공하는 반복문 중 하나로, 반복 횟수를 미리 정해놓고 반복을 수행하는 구조이다.

// for (초기식; 조건식; 증감식;){
//		// 조건식이 참일 동안 수행할 코드
//}

// for 문은 다음과 같이 동작한다.
// 1. 초기식을 먼저 실행한다. 이때 초기식에서 선언된 변수는 for문의 블럭에서 사용될 수 있다.
// 2. 조건식을 평가한다. 조건식이 참이면 반복문의 블럭을 실행한다. 조건식이 거짓이면 반복문을 종료한다.
// 3. 반복문의 블럭을 실행한다.
// 4. 증감식을 실행한다.
// 5. 2번째 순서로 돌아가 조건식을 평가한다.조건식이 참이면 반복문의 블럭을 실행한다. 조건식이 거짓이면 반복문을 종료한다.

//#include <stdio.h>
//int main() {
//	int i = 0;	// 초기값
//	//while (i<=10)	// 조건식
//	//{
//	//	printf("i = %d\n", i);
//	//	i++;	//증감 연산
//	//}
//	for (int i = 0; i < 10; i++)	// 초기값; 조건식; 증감연산
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
//	printf("1부터 10까지의 합 : %d\n", sum);
//}

// 문제
// 1. 1부터 N까지의 수의 합을 출력하는데 N의 수는 scanf_s를 사용하시오. (for문 사용)
//#include <stdio.h>
//int main() {
//	int i = 0;
//	int N = 0;
//	int sum = 0;
//	printf("무슨 수까지 더하겠습니까?");
//	scanf_s("%d", &N);
//	for (int i = 0; i<=N; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 %d까지의 합 : %d\n", N, sum);
//}

// 2. N의 값을 받아서 N의 구구단을 출력하시오.(for문으로 작성)
//#include <stdio.h>
//int main() {
//	int N = 0;
//	int i = 1;
//	printf("몇 단을 구할까요?");
//	scanf_s("%d", &N);
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d x %d = %d\n", N, i, N * i);
//	}
//}

// 3. 2단부터 9단까지 출력(for문으로 작성)
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

// 4. 별찍기 문제 (for문 사용)
//*
//**
//***
//****
//*****

//#include <stdio.h>
//int main() {
//	int i = 0;	// 행
//	int j = 0;	// 열
//	for (i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

// 5. 별찍기 문제 (for문 사용)
//*****
//****
//***
//**
//*

//#include <stdio.h>
//int main() {
//	int i = 0;	// 행
//	int j = 0;	// 열
//	for (i = 1; i <= 5; i++)
//	{
//		for (int j = 5; j >= i; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

// 문제 1부터 100까지의 수 중에서 홀수의 합과 짝수의 합을 출력하시오.

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
//	printf("1부터 100까지의 홀수의 합= %d\n짝수의 합= %d\n", oddsum, evensum);
//}

// 문제6. 1부터 100까지의 숫자 중에서 3과 5의 공배수일 때, "FizzBuzz", 3의 배수일 때 "Fizz", 5의 배수일 때 "Buzz"를 출력하고, 그 외의 숫자는 그대로 출력하는 프로그램을 작성하시오.
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

 //강사님 풀이
//# include <stdio.h>
//int main() {
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)	// 3과 5의 공배수인 경우
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

// 별찍기 문제

// 1. 직각삼각형 별찍기 -> 별찍기의 행수를 받은 뒤 행수만큼 별찍기가 되는 구조이다.

//#include <stdio.h>
//int main() {
//	int height = 0;
//	printf("몇층 그릴까요?");
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
// 2. 역 직각삼각형 별찍기 -> 별찍기의 행수를 받은 뒤 행수만큼 별찍기가 되는 구조이다.
//#include <stdio.h>
//int main() {
//	int height = 0;
//	printf("몇행 찍을까요?");
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
// 3. 피라미드 별찍기 -> 높이를 입력받아 피라미드 높이만큼 별이 찍힌다.
#/*include <stdio.h>
int main() {
	int height = 0;
	printf("높이를 입력하세요 : ");
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