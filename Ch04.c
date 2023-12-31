// 01 정수값 받기
//
//#include <stdio.h>
//int main() {
//	int n1 = 0;
//	printf("정수1 입력 : ");
//	scanf_s("%d", &n1);
//	// scanf_s : 표준입력장치(보통 키보드)로부터 프로그램 방향으로 값을 받을 때 사용
//	// "%d" : 정수 서식에 맞게 값을 받겠다.
//	// & : (참조 연산자) : 공간의 주소값을 반환한다.
//	// n1 : 변수명
//	printf("입력한 값 : %d\n", n1);
//}

//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	printf("정수 2개 입력 : ");
//	scanf_s("%d%d", &n1, &n2);	// 값은 스페이스바 혹은 엔터키를 기준으로 다음값 확인
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//}

// 문제
// 정수 3개를 한번에 받아서 세수의 합 / 곱 / 차를 출력해 보세요.
//
//#include <stdio.h>
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	printf("정수 3개 입력 : ");
//	scanf_s("%d%d%d", &n1, &n2, &n3);
//	printf("세수의 합 : %d\n", n1 + n2 + n3);
//	printf("세수의 곱 : %d\n", n1 * n2 * n3);
//	printf("세수의 차 : %d\n", n1 - n2 - n3);
//}

// 03 scanf_s 서식문자에 따른 값 받기

// %d : 10진 정수
// %f : 실수(float형)
// %lf : 실수(double형)
// %c : 문자서식
// %s : 문자열 서식

//#include <stdio.h>
//int main(){
//	int n1;
//	double n2;
//	char ch;
//
//	printf("정수 입력 >> ");
//	scanf_s("%d", &n1);
//	printf("저장된 정수 : %d\n", n1);
//
//	printf("실수 입력 >>");
//	scanf_s("%lf", &n2);
//	printf("저장된 실수 : %lf\n", n2);
//// scanf를 반복적으로 사용할 때 숫자값 입력과 문자값 입력 사이에 버퍼공간이 발생한다.
//// 따라서 버퍼공간을 초기화시켜주지 않으면 버퍼공간에 남아있는 문자 or 문자열 값이 다음 scanf의 입력된 갓으로 해석되기 때문에 문제가 발생한다.
//
//	rewind(stdin); // 남아있는 버퍼 공간을 초기화 시켜준다.
//	printf(" 문자 입력>>");
//	scanf_s("%c", &ch);
//	prinrf("저장된 문자 : %c\n", ch);
//}

//// 04 문자열 받기
////#include <stdio.h>
////int main() {
////	char gender;
////	char name[20];
////
////	printf("성별(W/M) : ");
////	scanf_s("%c", &gender, sizeof(gender));		// 프로그램이 gender 변수의 크기까지는 몰라서 생기는 문제이다.
////	printf("이름 : ");
////	scanf_s("%s", name, sizeof(name));		// sizeof : 프로그램에게 변수의 크기를 알려준다.
////
////	// 배열은 &가 생략될 수 있다(참조연산자) (포인터 파트에서 설명)
////
////	printf("====입력 확인====\n");
////	printf("이름 : %s\n성별 : %c\n", name, gender);
////
////	return 0;
////}

// 문제
// 국어, 영어, 수학 점수를 받아 합계와 평균을 출력하세요.
// 예
// 국영수입력 : 100 90 80
// 총점 : 270
// 평균 : 90.0
// 평균점수는 소수점 이하 2자리까지 출력합니다.
// 나눗셈 과정에서 소수점 이하 값이 유지되도록 강제 형변환 처리합니다.
//#include <stdio.h>
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//
//	printf("국어 점수 : ");
//	scanf_s("%d", &n1, sizeof(n1));
//
//	printf("영어 점수 : ");
//	scanf_s("%d", &n2, sizeof(n2));
//
//	printf("수학 점수 : ");
//	scanf_s("%d", &n3, sizeof(n3));
//	
//	printf("총점 : %d\n", n1 + n2 + n3);
//	printf("평균 : %.1f\n", ( float )(n1 + n2 + n3) / 3);
//	
//}

// 문제
// 다음과 같이 출력과 입력을 반복해보세요.
// 당신의 이름은 무엇입니까? 홍길동
// 홍길동 님의 나이는 몇살입니까? 40
// 홍길동 님의 나이는 40 살입니다.

// -> 여기서 홍길동, 40은 고정된 값이 아니라 키보드로 입력값을 받는 변수입니다.
// -> 다른 값으로도 바뀔 수 있기 떄문에 두번째 라인에서는 입력받은 이름이 출력될 수 있도록 처리해야 합니다.
//#include <stdio.h>
//int main() {
//	char name[20];
//	int age;
//
//	printf("당신의 이름은 무엇입니까? :");
//	scanf_s("%s", name, sizeof(name));
//	printf("%s님의 나이는 몇살입니까?", name);
//	scanf_s("%d", &age, sizeof(age));
//	printf("%s님의 나이는 %d살입니다.", name, age);
//
//	return 0;
//}

