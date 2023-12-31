// 포인터로서의 void

// 포인터를 선언할 때 데이터 타입으로 void를 사용하면, 어떤 데이터 타입의 메모리 주소든 포인터 변수에 할당할 수 있다. 이것을 일반 포인터, 또는 void 포인터라고 한다.

// void 포인터는 포인터 연산이 불가능. 그래서 해당 메모리의 내용을 읽거나 쓰기 위해서는 적절한 데이터 타입으로 캐스팅(형변환)을 해주어야 한다.

//#include <stdio.h>
//int main() {
//	int num = 10;
//	float fnum = 3.14;
//
//	void* ptr;	// * : 포인터 선언(주소값이 담길 예정)
//	ptr = &num;
//	printf("%d\n", *(int *)ptr);	// int * : 형변환 , 첫번째 * : 역참조
//
//	ptr = &fnum;
//	printf("%f\n", *(float*)ptr);
//}

// Static 변수

// static 이라는 키워드를 사용하여 static 변수를 선언할 수 있다. static은 전역변수와 지역변수 모두 선언 가능

// static은 지역변수를 일부 보완해주는 역할을 하기 위함.

// static을 사용하지 않을 때 : 선언된 지역 내에서 생성과 소멸을 반복

// static을 사용할 경우 : 선언된 지역 내에서 생성과 소멸을 반복하지만 static변수는 그대로 남아있다.
//#include <stdio.h>
//void test() {
//	int count = 0;
//	static int num = 0;
//	num++;
//	count++;
//	printf("The Count is %d\n\n", count);
//	printf("The Num is %d\n\n", num);
//}
//int main() {
//	test();
//	test();
//	test();
//}

//#include <stdio.h>
//
//static void printMessage(){ // 이 코드는 void 반환형을 가지는 정적 함수를 선언 및 정의 하고 있다.
//	printf("This is a static function with void return type.\n");
//}
//int main() {
//	// 메인 함수에서는 printMessage 함수를 호출하고 있다. 반환값이 없는 함수이므로, 호출 결과를 변수에 저장하거나 출력하지 않는다.
//	printMessage();
//	return 0;
//}

// static 키워드는 이 함수가 정의된 소수 파일에서만 사용할 수 있도록 제한한다.

// void 반환형은 반환값이 필요하지 않은 함수의 경우에 주로 사용한다.