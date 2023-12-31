// 구조체

// 구조체 -> 자바의 클래스, 파이썬의 클래스, C++

// 구조체 : 하나 이상의 변수를 한꺼번에 묶어서 만드는 '새로운 유형의 자료형'

// 구조체는 다음과 같은 형식으로 정의된다.

//struct 구조체 이름
//{
//	데이터 타입 멤버1 이름;
//	데이터 타입 멤버2 이름;
//};

// 구조체 이름은 새로 만들어질 구조체의 이름이며, 멤버이름은 구조체 내부에 있는 변수들의 이름이다.
//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//
//};

// 구조체를 선언할 때는 다음과 같이 변수명을 지정하면서 선언한다.
//struct Person p1;  // Person 구조체 타입의 변수 p1 선언

// p1 변수는 Person 구조체의 멤버인 name, age, height 각각 가지게 된다. 이 멤버들에 접근할 때는 .연산자를 사용

//strcpy(p1.name, "John");
//p1.age = 25;
//p1.height = 175.5;

// 구조체는 여러 개의 멤버를 묶어서 새로운 자료형을 만드는 것이라 배열처럼 여러 개의 구조체를 만들 수 있다.

//struct Person people[3];

//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996)	// 만약 코드 오류가 없는데 코드 오류라 한다면 그 코드 오류를 무시시켜준다.
//
//struct Person {
//	char name[20];
//	int age;
//	float height;
//};
//
//int main() {
//	struct Person p1;	// Person 구조체 타입의 변수 p1 선언
//	strcpy(p1.name, "koreait");	// strcpy : 문자열 복사 함수
//	p1.age = 25;
//	p1.height = 175.5;
//	printf("name = %s\n", p1.name);
//	printf("age = %d\n", p1.age);
//	printf("height = %f\n", p1.height);
//
//	printf("\n");
//
//	struct Person people[3];
//
//	strcpy(people[0].name, "C언어");
//	people[0].age = 60;
//	people[0].height = 180.3;
//
//	strcpy(people[1].name, "python언어");
//	people[1].age = 30;
//	people[1].height = 160.3;
//
//	strcpy(people[2].name, "JAVA언어");
//	people[2].age = 40;
//	people[2].height = 150.3;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("Person %d\n", i + 1);
//		printf("Name : %s\n", people[i].name);
//		printf("Age : %d\n", people[i].age);
//		printf("Height : %f\n", people[i].height);
//	}
//}

//struct person
//{
//	char name[30];
//	int age;
//};
//
//int main() {
//	// 구조체 변수 선언과 동시에 초기화
//	struct person boy = { "김소년",12 };
//	struct person girl = { "이소녀",9 };
//
//	printf("소년의 이름은 %s이고 나이는 %d입니다.\n", boy.name, boy.age);
//	printf("소녀의 이름은 %s이고 나이는 %d입니다.\n", girl.name, girl.age);
//}

#/*include <stdio.h>
#include <string.h>

struct student
{
	char name[20];
	int id;
	float score;
};
int main() {
	struct student stu;

	printf("학생 이름을 입력하세요(최대 20자 이하) >>>");
	fgets(stu.name, sizeof(stu.name), stdin);

	printf("학번을 입력하세요 (7자리 이하의 자연수) >>>");
	scanf_s("%d", &stu.id);

	printf("학생의 score를 입력하세요 (0에서 4.5 사이의 실수) : ");
	scanf_s("%f", &stu.score);

	printf("\n입력한 학생 정보 : \n");
	printf("이름 %s\n", stu.name);
	printf("학번 : %d\n", stu.id);
	printf("score : %.2f\n", stu.score);
}*/

// 알맞은 구조체를 선언하여 문제없이 잘 돌아가도록 만드시오.

// 문제

// 1. 도서의 제목을 저장하는 문자열(최대 100자)
// 2. 도서의 저자를 저장하는 문자열(최대 50자)
// 3. 도서의 가격을 저장하는 실수

// 구조체를 정의한 후 다음 동작을 수행하는 함수를 구현하십시오.

// 1. 사용자로부터 3권의 도서 정보를 입력받아 구조체 배열에 저장한다.
// 2. 입력된 도서 정보를 출력한다.

// 참고사항
// 1. 문자열을 저장할 수 있는 적절한 크기의 배열을 구조체 내에 포함시켜야 한다.
// 2. 사용자로부터 도서의 제목, 저자, 가격을 입력받아야 한다.

//#include <stdio.h>
//#include <string.h>
//#define BOOK_COUNT 3
//struct Book
//{
//	char bookname[100];
//	char bookauthor[50];
//	float price;
//};
//
//void inputBooks(struct Book books[BOOK_COUNT], int count) {
//	count = BOOK_COUNT;
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d번째 책 제목을 적으시오(100자까지 가능) >>\n", i + 1);
//		fgets(books[i].bookname, sizeof(books[i].bookname), stdin);
//		printf("%d번째 책 저자를 적으시오(50자까지 가능) >>\n", i + 1);
//		fgets(books[i].bookauthor, sizeof(books[i].bookauthor), stdin);
//		printf("%d번째 책 가격을 적으시오 >>\n", i + 1);
//		scanf_s("%f", &books[i].price);
//		while (getchar() != '\n');	// 버퍼 정리
//	}
//	
//	return 0;
//}
//
//void printBooks(struct Book books[BOOK_COUNT], int count) {
//	count = BOOK_COUNT;
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d번째 책 제목 : %s\n", i + 1, books[i].bookname);
//		printf("%d번째 책 저자 : %s\n", i + 1, books[i].bookauthor);
//		printf("%d번째 책 가격 : %f\n", i + 1, books[i].price);
//	}
//	return 0;
//}
//int main() {
//	struct Book books[BOOK_COUNT];
//
//	inputBooks(books, BOOK_COUNT);
//	printBooks(books, BOOK_COUNT);
//
//	return 0;
//}