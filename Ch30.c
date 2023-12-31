// typedef ����

// C���� C++���� ���Ǵ� Ű�����, ���ο� ������ Ÿ�Կ� ���� ������ ������ Ÿ�Կ� ���� ��Ī(alias)�� ����µ� ���ȴ�.
// typedef ������ ������ �����ϴ� �ڷ����� �� �̸��� �ο��ϴ� ������ ������ ������ �ڷ��� ������ �����ϰ� ������ش�.

//typedef int myint;

// myint�� int�� ������ ���� ������ Ÿ������ ��޵Ǹ� int�� ���� �� �ִ� ��� �������� myint�� ��밡��

//#include <stdio.h>
//
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;	// �������� ����(0���� 42�����)
//
//int main() {
//	// ���� ������ ����� �ڷ��� �̸��� ���� ����
//	typedef char CHAR;
//	typedef char* STR;
//
//	// typedef ���� ���� �ڷ����� ���� �ڷ����� ������ ������ ����
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

// ����ü�� ����� ����

//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//}Point;
//
//// typedef Ű���带 ����Ͽ� struct {int x; int y;}��� ����ü�� Point��� ���ο� ������ Ÿ������ ����
//// ���� Point�� ����ü�� ������ ����� �����ϸ�, ��ǥ ���� �����ϴ� �뵵�� ���
//
//int main() {
//	Point p = { 3,4 };
//	printf("%d %d\n", p.x, p.y);
//}

// Point�� ������ �����ϰ� �ʱ�ȭ�ϰ� ����ϴ� �ڵ��̴�.
// p������ Point ������ Ÿ������ ����Ǿ� ������, �ʱⰪ���� {3,4}�� �Ҵ��Ѵ�.

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
//	PERSON saram = { "�ڸ���", 15 };
//	printf("%d %d\n", position.x, position.y);
//	printf("%s %d\n", saram.name, saram.age);
//}

// ���� : ������ ���� ����ü�� ���� ��,
#include <stdio.h>
typedef struct {
	char name[50];
	int age;
	float height;
	int id;
}Student;

// 1. Student ����ü�� ����� 3���� ��� ������ �����ϴ� �迭�� ����� ����ϴ� ���α׷� �ۼ�

// 2. Student ����ü�� ������ �л� ������ �����ϴ� ����ü�� ���� -> �л��� �й�('id') ������ �߰��� ������.
// �� �� 3���� �л� ������ �����ϴ� �迭�� ����� ����ϴ� ���α׷� �����

int main() {
	Student students[3] = {
		{2023,"�ڸ���",25,165,5},
		{2024,"IT",30,195,3},
		{2025,"�뱸",65,185,2}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("ID : %d\n", students[i].id);
		printf("�̸� : %s\n", students[i].name);
		printf("���� : %d\n", students[i].age);
		printf("Ű : %.1f\n", students[i].height);
	}
}