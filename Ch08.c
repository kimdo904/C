// 반복문

// 프로그램에서 반복적으로 실행되는 코드를 작성할 때 사용한다.

// 1.while 문

// 조건이 참인 동안 반복적으로 코드를 실행한다. while 문의 구조는 다음과 같다.

// while(조건)
//{
//		//반복적으로 실행될 코드 예): 조건이 참이면 반복적으로 실행될 코드를 실행하고, 조건이 거짓이면 반복문을 종료한다.
//}

// 2. do-while문

// do-while은 while문과 유사하지만 조건 검사를 반복문의 끝에서 수행한다. 예:) 일단 한번은 반복문을 실행한 후 조건을 검사한다.

//do
//{
//	// 반복적으로 실행될 코드
//} while (조건);

// 03) 중첩 while문

// while 문 안에 중첩이 가능하다.
//
//#include <stdio.h>
//int main() {
//	while (true)
//	{
//		while (true)
//		{
//
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	// 탈출용 변수
//	// 탈출용 조건식
//	// 탈출을 위한 연산식
//
//	int i = 1;	// 탈출용 변수
//	while (i<=10)	// 탈출용 조건식
//	{
//		printf("Hello\n");
//		i++;
//	}
//}

// 02) 1부터 100까지의 합 구하기

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i<=100)
//	{
//		printf("i = %d\n", i);
//		sum = sum + i;
//		i++;
//	}
//	printf("while 종료 이후 i = %d\n", i);
//	printf("1부터 100까지의 합 : %d\n", sum);
//	return 0;
//}

// 문제 : 키보드로부터 숫자하나(num)을 입력받아서 1부터 N까지의 합을 구하시오.
//#include <stdio.h>
//int main()
//{	
//	int num = 0;
//	int i = 1;
//	int sum = 0;
//	printf("1부터 어느 숫자까지 더할까요?>>>");
//	scanf_s("%d", &num);
//	while (i <= num)
//	{
//		printf("i = %d\n",i);
//		sum = sum + i;
//		i++;
//	}
//	printf("1부터 %d까지의 합 : %d", num, sum);
//}

// 문제 : 구구단 출력 : 2단만 출력
//# include <stdio.h>
//int main()
//{
//	int i = 1;
//	
//	while (i<=9)
//	{
//		printf("2 * %d : %d\n",i, 2*i);
//		i++;
//	}
//}

// 문제 : 구구단 수 하나를(ex.4단이면 4) 입력받아 구구단 출력을 합니다.

//# include <stdio.h>
//int main()
//{
//	int i = 1;
//	int num = 1;
//	printf("구구단 수 하나를 입력하세요(1~9) >>");
//	scanf_s("%d", &num);
//	while (i<=9)
//	{
//		printf("%d * %d = %d\n", num, i, num * i);
//		i++;
//	}
//}

// 1부터 100까지의 수 중에 짝수끼리, 홀수끼리 합 구하기(%연산자)

//#include <stdio.h>
//int main() {
//	int i = 1;
//	int sum = 1;
//	int sum2 = 1;
//	if (i % 2 == 0)
//	{
//		while (i<=100)
//		{
//			printf("1부터 100까지의 짝수의 합 : %d", sum);
//			sum = sum + i;
//			i++;
//		}
//	}
//	else
//	{
//		while (i<=100)
//		{
//			printf("1부터 100까지의 홀수의 합 : %d\n", sum2);
//			sum2 = sum2 + i;
//			i++;
//		}
//	}
//}
//
//#include <stdio.h>
//int main() {
//	int i = 1;
//	int evensum = 1;
//	int oddsum = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 0)
//		{
//			//짝수인 경우
//			evensum += i;
//		}
//		else
//		{
//			//홀수인 경우
//			oddsum += i;
//		}
//	}
//	i++;
//	printf("1부터 100까지의 수중에 짝수합 = %d, 홀수합 = %d", evensum, oddsum);
//}