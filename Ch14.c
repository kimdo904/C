// 포인터

// 0. 포인터 사용 이유:
// 0.1 메모리의 주소를 참조해서 다양한 접근과 조작이 쉽다.
// 0.2 동적 할당된 (힙영역)에 접근과 조작이 용이.
// 0.3 메모리 공간을 효율적으로 사용

// 1. 메모리의 주소를 사용하는 변수다.
// 2. 변수는 메모리에 저장된다. 메모리는 바이트 단위로 엑세스된다.
// 3. 변수의 크기에 따라 차지하는 메모리 공간이 달라진다.
// char형 변수 : 1byte, int형 : 4byte. . . 

// 2) 변수의 주소

// 변수 : 메모리 상의 저장공간, 그 위치를 알면 사용할 수 있다.
// 변수의 위치값 - 주소

// 변수의 주소를 계산하는 연산자 : &(참조연산자)
// ex) 변수 i의 주소 : &i

//#include <stdio.h>
//
//int main()
//{
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//
//	printf("i의 주소 : %u\n", &i);
//	printf("c의 주소 : %u\n", &c);
//	printf("f의 주소 : %u\n", &f);
//}

// 포인터와 연산자

// 주소 연산자 : int a;		&a	기능: 변수 앞에 붙여 사용하면 변수가 할당된 메모리의 시작 주소값을 구한다.
// int a = 10	 : 메모리의(가정) : 100번지~103번지 4바이트의공간에 10을 저장
// a + 20(수식)	 : 메모리의 100번지~103번지까지 4바이트에 저장된 값과 20을 더하는 연산 수행
// 결론 : 변수명으로 메모리 공간이나 값 간단히 사용 가능

// 변수의 크기, 메모리의 할당방식에 따라 
// 컴파일러와 운영체제에 따라 다를 수 있다.
// 변수의 주소값을 받을 때는 대체적으로 %x나 %p를 사용해 16진수로 출력하는 것이 보기 좋다.

// 포인터 : char *pc;		// 기능 : 시작 주소값을 저장하는 변수며 가리키는 자료형을 표시하여 선언한다.
//			int *pi
//			double *pd

// 간접참조 연산자 : *pc = 10;  // 기능 : 포인터에 사용하며 포인터가 가리키는 변수를 사용한다.

//#include <stdio.h>
//int main() {
//	int a;		// 일반 변수 선언
//	int* pa;	// 포인터 선언
//
//	pa = &a;	// 포인터에 a의 주소 대입
//	*pa = 10;	// 포인터로 변수 a에 10을 대입한다.
//
//	printf("%p\n", a);
//	printf("%p\n", pa);
//	printf("%p\n", *pa);
//	printf("포인터로 a값 출력 : %d\n", *pa);
//	printf("변수명으로 a값 출력 : %d\n", a);
//
//	return 0;
//}
//
//// a의 주소값과 포인터pa 주소값은 힙영역에 있다.
//// pa가 a의 주소값을 받는다.
//// *pa는 a의 값(value)을 받는 권한이 생긴다.

//#include <stdio.h>
//int main() {
//	int i = 3000;
//	int* p = &i; // 변수와 포인터 연결
//	
//	printf("&i = %u\n", &i);	// 변수의 주소 출력
//	printf("p = %u\n", p);	// 포인터의 값 출력
//	
//	printf("i = %d\n", i);	// 변수의 값 출력
//	printf("*p = %d\n", *p);	// 포인터를 통한 간접 참조 값 출력
//}

// 포인터 사용시 주의점
// 1. 포인터의 타입과 변수의 타입은 일치하여야 한다.

//#include <stdio.h>
//int main() {
//	// 포인터의 타입과 변수의 타입은 일치하여야 한다.
//	int i;
//	double* pd;
//
//	pd = &i;
//	*pd = 36.5;
//}

// 2. 

//#include <stdio.h>
//int main() {
//	// 포인터는 무조건 초기화를 시켜야 한다.
//	// 초기화 : 변수나 배열, 구조체 등을 처음으로 값을 할당하는 것을 의미한다.
//	int* p;
//	p = 100;	// 위험한 코드
//}

// 3.
// 1. 포인터가 아무것도 가리키고 있지 않는 경우에는 NULL로 초기화
// 2. NULL 포인터를 가지고 간접 참조하면 하드웨어로 감지할 수 있다.
// 3. 포인터의 유효성 여부 판단이 쉽다.

//#include <stdio.h>
//int main() {
//	int* p_num = NULL;
//
//	if (p_num == NULL)
//	{
//		printf("포인터 변수가 NULL을 가리킵니다.");
//	}
//	else
//	{
//		printf("포인터 변수가 NULL을 가리키지 않습니다.");
//	}
//}

// scanf_s 함수는 사용자로부터 입력을 받을 때, 메모리 영역을 벗어나는 오류를 방지하기 위해 입력 값을 저장할 변수의 주소를 입력해야 한다.

// 문제 : 정수형 변수 a에 10을 저장하고, 이 변수의 값을 포인터를 사용하여 출력하세요.
// 변수 : a		포인터 변수 : p_a
 
//#include <stdio.h>
//int main() {
//	int a;
//	int* p_a;
//
//	p_a = &a;
//	*p_a = 10;
//	
//	printf("a의 값 = %d\n", *p_a);
//}

// 강사님 풀이
//#include <stdio.h>
//int main() {
//	int a = 10;
//	int* p_a = &a;
//	printf("%d", *p_a);
//}

// 문제 : 두 개의 정수를 입력받아 두 정수의 값을 서로 바꾸는 프로그램을 작성하시오. 이때, 포인터를 사용하여 값을 교환하시오.
//#include <stdio.h>
//int main() {
//	int a;
//	int b;
//	int* pa;
//	int* pb;
//
//	printf("a,b값을 순서대로 입력하세요 : ");
//	scanf_s("%d%d", &a, &b);
//	printf("원래 a의 값 = %d\n원래 b의 값 = %d\n", a, b);
//	pa = &a;	
//	pb = &b;
//
//	int temp = *pa;
//	*pa = *pb;	// a = 20
//	*pb = temp; // b = 10
//
//
//	printf("바뀐 후 a의 값 = %d\n바뀐 후 b의 값 = %d\n", a, b);
//
//}

// 메모리 메니지먼트 = 포인터

// 포인터(Pointer)에서 *은 두 가지 의미를 가질 수 있다.

// 1. 포인터 선언 ex) int *ptr  주소값을 저장할 수 있는 ptr이라는 변수 선언

// 2. 역참조 : *은 포인터가 가리키는 메모리 주소에 저장된 값을 읽거나 수정하는데 사용가능하다.
//#include <stdio.h>
//int main() {
//	int x = 10;
//	int* ptr = &x;	// 포인터 ptr은 변수 x의 주소를 가리킴.
//	int value = *ptr;	// ptr이 가리키는 주소에 저장된 값을 읽음(value는 10이 된다.)
//	*ptr = 20;	// ptr이 가리키는 주소에 20을 저장한다.(x의 값이 20이 된다.)
//	printf("%d", x);
//}