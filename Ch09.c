// 전체 구구단
// 2단 ~ 9단까지 출력 1번

//#include <stdio.h>
//int main() {
//	int num = 2;
//	while (num<=9)	// 2단부터 9단까지 반복
//	{
//		printf("%d단\n", num);
//		int i = 1;
//		while (i<=9)	// 곱하는 수를 1부터 9까지 반복
//		{
//			printf("%d x %d = %d\n", num, i, num * i);
//			i++;
//		}
//		printf("\n");	// 각 단마다 빈 줄 출력
//		num++;
//	}
//}

// 2번 2단 역순 출력
//#include <stdio.h>
//int main() {
//	int i = 9;
//	printf("2단 역순 출력\n");
//	while (i>=1)
//	{
//		printf("2 x %d = %d\n", i, 2 * i);
//		i--;
//	}
//}

// 구구단 역순 출력
//#include <stdio.h>
//int main() {
//	int num = 9;
//	while (num >=2)	// 2단부터 9단까지 반복
//	{
//		printf("%d단\n", num);
//		int i = 9;
//		while (i >=1)	// 곱하는 수를 1부터 9까지 반복
//		{
//			printf("%d x %d = %d\n", num, i, num * i);
//			i--;
//		}
//		printf("\n");	// 각 단마다 빈 줄 출력
//		num--;
//	}
//}

//#include <stdio.h>
//int main() {
//	int i = 1;	// 행증가
//	int j = 1;	// 열증가
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

// 문제1 : 높이를 입력받아 높이만큼의 삼각형 출력

// 출력 예
// 높이 : 3
// *
// **
// ***

//#include <stdio.h>
//int main() {
//	int n = 0;
//	printf("높이 입력>>");
//	scanf_s("%d", &n);
//	int i = 0;	//행
//	while (i<n)
//	{
//		int j = 0;	//열
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}

// 문제2 : 높이를 입력받아 높이만큼의 삼각형 출력

// 출력 예
// 높이 : 3
// ***
// **
// *

//#include <stdio.h>
//int main() {
//	int i = 1, j = 1, num;
//	printf("높이 입력 >>");
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


// 문제3 : 아래와 같이 높이를 입력받으면 높이만큼 정삼각형이 출력되도록 하시오.

//   *
//  ***
// *****
//*******



//#include<stdio.h>
//int main() {
//	int height;
//	printf("높이 입력 >>>");
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
//	printf("높이를 입력하세요>>>");
//	scanf_s("%d", &height);
//
//	int i = 0;
//	while (i<height)	// 몇 번 돌릴지(높이만큼)
//	{
//		int j = 0;
//		// 공백을 찍어내기 위한 while이다.
//		while (j < height -i -1)
//		{
//			printf(" ");
//			j++;
//		}
//
//		int k = 0;
//
//		// 별을 찍기 위한 while이다.
//		while (k< 2 * i + 1)
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}