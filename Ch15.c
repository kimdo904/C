// 포인터 연산

// 포인터의 증가는 일반 변수와는 약간 다르다. 가리키는 객체의 크기(byte 수)만큼 증가한다.

// 포인터 타입						++연산 후 증가되는 값
// char								1byte
// short							2
// int								4
// float							4
// double							8

//// 포인터의 증감 연산
//#include <stdio.h>
//int main() {
//	char* pc;
//	int* pi;
//	double* pd;
//
//	pc = (char*)10000;
//	pi = (int*)10000;
//	pd = (double*)10000;
//
//	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//	pc++;
//	pi++;
//	pd++;
//	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//}

// 포인터간의 비교
//#include <stdio.h>
//int main() {
//	int i, j,* p1,* p2;
//	p1 = &i;
//	p2 = &j;
//
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//
//	if (p1 != NULL)
//	{
//		printf("p1이 NULL이 아님\n");
//	}
//	if (p1 != p2)
//	{
//		printf("p1과 p2가 같지 않음.\n");
//	}
//	if (p1 < p2)
//	{
//		printf("p1이 p2보다 앞에 있음");
//	}
//	else
//	{
//		printf("p1이 p2보다 뒤에 있음");
//	}
//}