// 함수
// 수를 담아서 처리하는 논리적인 공간
// 프로그램 내의 특정한 기능을 담당하는 작은 프로그램으로 해석
// 모듈화에 사용된다.

// 모듈이란?
// 모듈 : 독립되어 있는 프로그램의 일부분
// 모듈러 프로그래밍 : 모듈 개념을 사용하는 프로그래밍 기법
// 모듈러 프로그래밍의 장점
// 1. 각 모듈들은 독자적으로 개발이 가능하다.
// 2. 다른 모듈과 독립적으로 변경 가능
// 3. 유지 보수가 쉬워진다.
// 4. 모듈의 재사용 가능

// C언어에서는 모듈과 함수가 같은 말이다.
// 함수란 무엇인가?
// 함수(function) : 특정한 작업을 수행하는 독립적인 부분
// 함수 호출(function call) : 함수를 호출하여 사용하는 것
// 함수는 입력을 받으면 출력을 생성한다.

// 함수의 종류
// 함수 1. 사용자 정의 함수
// 함수 2. 라이브러리 함수

// 함수의 정의
// 반환형(return type)
// 함수 헤더(function header)
// 함수 몸체(function body)

// main(void)를 넣는 이유

// C언어에서 main() 함수의 반환형은 반드시 정의되어야 한다.
// void 반환형은 main 함수가 값을 반환하지 않음을 나타내며, 이는 프로그램이 종료될 때 어떤값도 반환하지 않는 것을 의미한다. 
// 따라서 void 반환형을 사용하는 것은 C언어에서 권장되는 방식이다. 
// 이는 프로그램이 종료될 때 반환되는 값이 없기 때문에 오류가 발생할 가능성이 줄어든다. 
// 또한 main함수가 반환되는 값을 사용하는 경우는 드물기 때문에 void인 main함수는 일반적으로 프로그램의 실행에 아무런 문제가 없다.

// C언어는 무조건적으로 main함수에서만 돌아가도록 설계가 되어 있다. 그 외의 함수는 모두 호출을 받아야 실행이 된다.

// 결론 : void(값을 반환하지 않음)와 return(값을 반환한다) 둘 다 쓰는 것을 권장
//#include <stdio.h>
//int main(void)
//{
//	printf("Hello");
//
//	return 0;
//}

// 01 예제 함수의 필요성

//#include <stdio.h>
//void PrintHello() {		// 함수의 헤더(선언부)
//	int n = 0;
//	printf("반복횟수를 입력하세요 >>> ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Hello world\n");
//	}
//}
//
//int main(void) {
//	PrintHello();
//	// 작업1
//	// 작업2
//	// 작업3
//	PrintHello();
//	return 0;
//}

// 02 함수의 형태 확인

//#include <stdio.h>
//int sum1(int x, int y) {		// int x, int y는 매개변수
//	return x + y;
//}
//
//int sum2() {
//	printf("두 수를 입력하세요 >>");
//	int x = 0, y = 0;
//	scanf_s("%d%d", &x, &y);
//	return x + y;
//}
//
//int sum3(int x, int y) {
//	printf("sum3(%d,%d) = %d\n", x, y, x + y);
//}
//
//int sum4() {
//	int x = 0, y = 0;
//	printf("두 수를 입력하세요>>>");
//	scanf_s("%d%d", &x, &y);
//	printf("두 수의 합 : %d\n", x + y);
//}
//int main()
//{
//	int n1 = sum1(100, 300);	// 100, 300 은 인수
//	printf("sum1은 %d\n", n1);
//	
//	int n2 = sum2();
//	printf("sum2은 %d\n", n2);
//	
//	sum3(1000, 2000);
//
//	sum4();
//}

// 03 함수 호출(function call)
// 1. 함수를 사용하기 위하여 함수의 이름을 적어주는 것
// 2. 함수 안의 문장들이 순차적으로 실행된다.
// 3. 문장의 실행이 끝나면 호출한 위치로 되돌아 간다.
// 4. 결과값을 전달할 수 있다.

// 인수와 매개변수
// 인수(argument) : C언어에서 함수를 호출할 때 함수에 인수(argument)를 전달할 수 있다. 함수 인수는 함수 호출 시 괄호 안에 쉼표로 구분하여 전달된다.
// 함수 인수를 사용하면 함수가 실행될 때 함수 내부에서 인수를 참조할 수 있다.

// 매개변수(parameter) : 함수 선언부나 정의부에서 함수가 호출될 때 전달되는 값을 저장하기 위한 변수
// 매개변수는 함수 내에서 지역 변수와 마찬가지로 사용되며, 함수 호출 시 전달된 인수(argument)값이 저장된다.

//#include <stdio.h>
//int add(int a, int b) {		// int a, b는 함수에 전달되는 인수 값을 저장하기 위한 변수 이름이다. 매개변수의 데이터 타입과 변수 이름 사이에는 쉼표로 구분한다.
//	int sum = a + b;
//	return sum;
//}
//
//int main() {
//	// 3과 5가 add() 인수가 된다.
//	int result = add(3, 5);
//	printf("%d", result);
//}

// 문제 : 다음 조건을 만족하는 함수를 만드세요
// 반환 자료형은 int
// 함수명 : sum
// 매개변수 : 4개의 정수값을 다른 함수로부터(main) 전달 받음
// 내부로직
// - 짝수는 짝수끼리 합출력
// - 홀수는 홀수끼리 합출력
// - 전달받은 모든 수의 합을 return 한 후 result라는 변수에 담아 printf를 써서 출력하시오.
//#include <stdio.h>
//int sum(int n1, int n2, int n3, int n4) {
//	int sum1 = 0;
//	int sum2 = 0;
//	if (n1%2==0)
//	{
//		sum1 += n1;
//	}
//	else
//	{
//		sum2 += n1;
//	}
//	if (n2 % 2 == 0)
//	{
//		sum1 += n2;
//	}
//	else
//	{
//		sum2 += n2;
//	}
//	if (n3 % 2 == 0)
//	{
//		sum1 += n3;
//	}
//	else
//	{
//		sum2 += n3;
//	}
//	if (n4 % 2 == 0)
//	{
//		sum1 += n4;
//	}
//	else
//	{
//		sum2 += n4;
//	}
//	printf("짝수 합 : %d\n", sum1);
//	printf("홀수 합 : %d\n", sum2);
//	return n1 + n2 + n3 + n4;
//}
//
//int main() {
//	int result = sum(10, 11, 20, 21);
//	printf("result = %d\n", result);
//	return 0;
//}

// 지역변수
// {} 지역에서 생성되고 {}를 벗어나면 소멸되는 변수, 특정한 함수, 블럭(block) 또는 문(statement)내에서 정의된 변수이다.
// 지역변수는 정의된 블럭 또는 문 내에서만 유효하며, 함수나 블럭이 끝나면 메모리에서 해제된다.
// 블럭 : {} 얘가 블럭

//#include <stdio.h>
//
//void Func() {
//	int num = 10;
//	num++;
//	printf("첫 번째 num = %d\n", num);
//}
//
//int main() {
//	int num = 10;
//	num++;
//	num++;
//	Func(); // call 함수 호출
//	printf("두 번째 num = %d\n", num);
//}

// 02 지역변수 (예제)

//#include <stdio.h>
//int main()
//{
//	int num = 10;	// main 함수의 num
//	if (num % 2 == 0)	// 조건식의 num은 main 지역의 num
//	{
//		int num = 12;
//		printf("if안의 num = %d\n", num);
//	}
//	printf("main의 num = %d\n", num);
//	for (int i = 0; i < 3; i++)
//	{
//		int num = i;	// for문 안의 num
//		printf("for 안의 num = %d\n", num);
//		return 0;
//	}
//}

// 전역변수

// 1. 전역변수는 프로그램 전체에서 사용 가능한 변수이다. 전역변수는 모든 함수나 블럭 외부에서 정의되며, 프로그램이 종료될 때까지 메모리에서 유지된다.
// 2. 전역변수는 프로그램 내에서 어디에서든지 사용할 수 있으므로, 프로그램에 다른 부분에서 변수명이 중복되어 사용될 가능성이 있다. 따라서 전역변수는 가능한 사용을 최소화 해야한다.
//#include <stdio.h>
//
//int num = 10;
//
//void Func1() {
//	int num = 5;
//	num++;
//	printf("num = %d\n", num);
//}
//void Func2() {
//	num++;
//	printf("num = %d\n", num);
//}
//void Func3() {
//	num++;
//	printf("num = %d\n", num);
//}
//int main() {
//	Func1();
//	Func2();
//	Func3();
//}

// 문제
// 정수를 입력하세요 >>> 100
// 출력값 : 1부터 100까지의 합은 5050 입니다.

//#include <stdio.h>
//
//int sum1(int x) {
//	int result = 0;
//	for (int i = 0; i <= x ; i++)
//	{
//		result = result + i; // result += x
//	}
//	return result;
//}
//int main() {
//	int n, sum;
//
//	printf("정수를 입력하세요 >>>");
//	scanf_s("%d", &n);
//
//	sum = sum1(n);
//	printf("1부터 %d까지의 합은 %d입니다.", n, sum);
//	return 0;
//}

// 예시 : 학생이 10명이 있다. 그런데 이들의 평균 성적을 계산한다 가정해보자.

// 방법1
// int s1~10번까지 만들기 -> 다 더한 값의 나누기 10

// 방법2

// int s[10];

// 배열(array)
// 배열이란 : 동일한 타입의 데이터가 여러 개 저장되어 있는 데이터 저장 장소(구조)
// 배열 안에 들어있는 각각의 데이터들은 정수로 되어있는 번호(첨자)에 의하여 접근한다.
// 배열을 이용하면 여러 개의 값을 하나의 이름으로 처리할 수 있다.

// 인덱스 : 배열 원소의 번호

// 배열은 다음과 같은 형식으로 정의된다.
// data_type array_name[array_size]

// int arr[5]	// 크기가 5인 int형 배열 arr 정의

// 배열은 인덱스[index]를 사용하여 각 요소에 접근이 가능해진다. 인덱스는 0부터 시작하며, 배열의 크기보다 작아야 한다.
// arr[0] = 10; // arr의 첫 번째 요소에 10을 저장한다.
// arr[1] = 20; // arr의 두 번째 요소에 20을 저장한다.

// 위 예제에서 arr[0]은 배열의 첫 번째 요소를 나타내며, arr[1]은 두 번째 요소를 나타낸다.

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10,20,30,40,50 };	// 요소 5개를 가지는 int형 배열 arr
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

// 배열의 선언

// int		grade		[10]
// 자료형	배열이름	배열크기

// 자료형 : 배열 원소(타입)이 int 형이라는 것을 의미
// 배열이름 : 배열을 사용할 때 사용하는 이름이 grade
// 배열크기 : 배열 원소의 개수가 10
// ** 인덱스(배열 번호)는 항상 0부터 시작해야 한다.

// int score[60];	// 60개의 int형 값을 가지는 배열 score
// float cost[12];	// 12개의 float형 값을 가지는 배열 cost
// char name[50];	// 50개의 char형 값을 가지는 배열 name
// char src[10], dst[10];	// 2개의 문자형 배열을 동시 선언
// int index, dats[7];	// 일반 변수와 배열을 동시 선언

//#include <stdio.h>
//int main() {
//	int grade[10];
//	for (int i = 0; i < 10; i++)
//	{
//		grade[i] = i + 1;
//	}
//	printf("====================\n");
//	printf("인덱스			값\n");
//	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d			%d\n", i, grade[i]);
//	}
//}
//
