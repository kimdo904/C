// ����ü

// ����ü -> �ڹ��� Ŭ����, ���̽��� Ŭ����, C++

// ����ü : �ϳ� �̻��� ������ �Ѳ����� ��� ����� '���ο� ������ �ڷ���'

// ����ü�� ������ ���� �������� ���ǵȴ�.

//struct ����ü �̸�
//{
//	������ Ÿ�� ���1 �̸�;
//	������ Ÿ�� ���2 �̸�;
//};

// ����ü �̸��� ���� ������� ����ü�� �̸��̸�, ����̸��� ����ü ���ο� �ִ� �������� �̸��̴�.
//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//
//};

// ����ü�� ������ ���� ������ ���� �������� �����ϸ鼭 �����Ѵ�.
//struct Person p1;  // Person ����ü Ÿ���� ���� p1 ����

// p1 ������ Person ����ü�� ����� name, age, height ���� ������ �ȴ�. �� ����鿡 ������ ���� .�����ڸ� ���

//strcpy(p1.name, "John");
//p1.age = 25;
//p1.height = 175.5;

// ����ü�� ���� ���� ����� ��� ���ο� �ڷ����� ����� ���̶� �迭ó�� ���� ���� ����ü�� ���� �� �ִ�.

//struct Person people[3];

//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996)	// ���� �ڵ� ������ ���µ� �ڵ� ������ �Ѵٸ� �� �ڵ� ������ ���ý����ش�.
//
//struct Person {
//	char name[20];
//	int age;
//	float height;
//};
//
//int main() {
//	struct Person p1;	// Person ����ü Ÿ���� ���� p1 ����
//	strcpy(p1.name, "koreait");	// strcpy : ���ڿ� ���� �Լ�
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
//	strcpy(people[0].name, "C���");
//	people[0].age = 60;
//	people[0].height = 180.3;
//
//	strcpy(people[1].name, "python���");
//	people[1].age = 30;
//	people[1].height = 160.3;
//
//	strcpy(people[2].name, "JAVA���");
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
//	// ����ü ���� ����� ���ÿ� �ʱ�ȭ
//	struct person boy = { "��ҳ�",12 };
//	struct person girl = { "�̼ҳ�",9 };
//
//	printf("�ҳ��� �̸��� %s�̰� ���̴� %d�Դϴ�.\n", boy.name, boy.age);
//	printf("�ҳ��� �̸��� %s�̰� ���̴� %d�Դϴ�.\n", girl.name, girl.age);
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

	printf("�л� �̸��� �Է��ϼ���(�ִ� 20�� ����) >>>");
	fgets(stu.name, sizeof(stu.name), stdin);

	printf("�й��� �Է��ϼ��� (7�ڸ� ������ �ڿ���) >>>");
	scanf_s("%d", &stu.id);

	printf("�л��� score�� �Է��ϼ��� (0���� 4.5 ������ �Ǽ�) : ");
	scanf_s("%f", &stu.score);

	printf("\n�Է��� �л� ���� : \n");
	printf("�̸� %s\n", stu.name);
	printf("�й� : %d\n", stu.id);
	printf("score : %.2f\n", stu.score);
}*/

// �˸��� ����ü�� �����Ͽ� �������� �� ���ư����� ����ÿ�.

// ����

// 1. ������ ������ �����ϴ� ���ڿ�(�ִ� 100��)
// 2. ������ ���ڸ� �����ϴ� ���ڿ�(�ִ� 50��)
// 3. ������ ������ �����ϴ� �Ǽ�

// ����ü�� ������ �� ���� ������ �����ϴ� �Լ��� �����Ͻʽÿ�.

// 1. ����ڷκ��� 3���� ���� ������ �Է¹޾� ����ü �迭�� �����Ѵ�.
// 2. �Էµ� ���� ������ ����Ѵ�.

// �������
// 1. ���ڿ��� ������ �� �ִ� ������ ũ���� �迭�� ����ü ���� ���Խ��Ѿ� �Ѵ�.
// 2. ����ڷκ��� ������ ����, ����, ������ �Է¹޾ƾ� �Ѵ�.

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
//		printf("%d��° å ������ �����ÿ�(100�ڱ��� ����) >>\n", i + 1);
//		fgets(books[i].bookname, sizeof(books[i].bookname), stdin);
//		printf("%d��° å ���ڸ� �����ÿ�(50�ڱ��� ����) >>\n", i + 1);
//		fgets(books[i].bookauthor, sizeof(books[i].bookauthor), stdin);
//		printf("%d��° å ������ �����ÿ� >>\n", i + 1);
//		scanf_s("%f", &books[i].price);
//		while (getchar() != '\n');	// ���� ����
//	}
//	
//	return 0;
//}
//
//void printBooks(struct Book books[BOOK_COUNT], int count) {
//	count = BOOK_COUNT;
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d��° å ���� : %s\n", i + 1, books[i].bookname);
//		printf("%d��° å ���� : %s\n", i + 1, books[i].bookauthor);
//		printf("%d��° å ���� : %f\n", i + 1, books[i].price);
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