// typedef 선언

// C언어와 C++에서 사용되는 키워드로, 새로운 데이터 타입에 대해 기존의 데이터 타입에 대한 별칭(alias)를 만드는데 사용된다.
// typedef 선언은 기존에 존재하는 자료형에 새 이름을 부여하는 것으로 복잡한 유형의 자료형 선언을 간결하게 만들어준다.

//typedef int myint;

// myint는 int와 완전히 같은 데이터 타입으로 취급되며 int가 사용될 수 있는 모든 곳에서도 myint도 사용가능

//#include <stdio.h>
//
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;	// 보수개념 제거(0부터 42억까지)
//
//int main() {
//	// 지역 내에서 사용할 자료형 이름에 대한 선언
//	typedef char CHAR;
//	typedef char* STR;
//
//	// typedef 선언 이후 자료형은 기존 자료형과 동일한 역할을 수행
//	INT num = 3;
//	PINT ptr = &num;
//	UINT unum = 5;
//
//	CHAR ch = 'c';
//	STR str = "Hello";
//
//	printf("%d %d %d\n", num, *ptr, unum);
//	printf("%c %s\n", ch, str);
//}

// 구조체를 사용한 예시

//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//}Point;
//
//// typedef 키워드를 사용하여 struct {int x; int y;}라는 구조체를 Point라는 새로운 데이터 타입으로 정의
//// 이제 Point는 구조체와 동일한 기능을 수행하며, 좌표 값을 저장하는 용도로 사용
//
//int main() {
//	Point p = { 3,4 };
//	printf("%d %d\n", p.x, p.y);
//}

// Point를 변수로 선언하고 초기화하고 출력하는 코드이다.
// p변수는 Point 데이터 타입으로 선언되어 있으며, 초기값으로 {3,4}를 할당한다.

//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//
//}Point;
//
//struct person {
//	char name[30];
//	int age;
//};
//
//typedef struct person PERSON;
//
//int main() {
//	Point position = { 30,60 };
//	PERSON saram = { "코리아", 15 };
//	printf("%d %d\n", position.x, position.y);
//	printf("%s %d\n", saram.name, saram.age);
//}

// 문제 : 다음과 같은 구조체가 있을 때,
#include <stdio.h>
typedef struct {
	char name[50];
	int age;
	float height;
	int id;
}Student;

// 1. Student 구조체를 사용해 3명의 사람 정보를 저장하는 배열을 만들고 출력하는 프로그램 작성

// 2. Student 구조체를 수정해 학생 정보를 저장하는 구조체로 변경 -> 학생의 학번('id') 정보를 추가해 보세요.
// 이 후 3명의 학생 정보를 저장하는 배열을 만들고 출력하는 프로그램 만들기

int main() {
	Student students[3] = {
		{2023,"코리아",25,165,5},
		{2024,"IT",30,195,3},
		{2025,"대구",65,185,2}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("ID : %d\n", students[i].id);
		printf("이름 : %s\n", students[i].name);
		printf("나이 : %d\n", students[i].age);
		printf("키 : %.1f\n", students[i].height);
	}
}