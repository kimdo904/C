// 01 산술연산자(+,-,*,/,%)
//#include <stdio.h>
//int main() {
//	int a = 10, b = 20, c = 0;
//	printf("a + b = %d\n", a + b);
//	printf("a - b = %d\n", a - b);
//	printf("a * b = %d\n", a * b);
//	printf("a / b = %d\n", a / b);		// 나누기(몫을 구하는 연산자)
//	printf("a % b = %d\n", a % b);		// 나누고 난 나머지를 구하는 연산자(나머지를 구하는 연산자)
//}

// 02 복합대입{연산자(+=, -=, *=, /=, %=)
//#include <stdio.h>
//int main() {
//	int a = 10, b = 20, c = 0;
//	a += b;		// a = a + b
//	printf("a = %d\n", a);
//	a -= b;		// a = a - b
//	printf("a = %d\n", a);
//	a *= b;		// a = a * b
//	printf("a = %d\n", a);
//	a /= b;		// a = a / b
//	printf("a = %d\n", a);
//}

// 03 비교 연산자

// 참 : 0이 아닌 모든 값(대표값 : 1)
// 거짓 : 0

//#include <stdio.h>
//int main() {
//	int a = 10, b = 20, c = 0;
//	printf("a = b ? %d\n", a == b);
//	printf("a > b ? %d\n", a > b);
//	printf("a >= b ? %d\n", a >= b);
//	printf("a < b ? %d\n", a < b);
//	printf("a != b ? %d\n", a != b);		// a는 b랑 다른가? (! 는 반대적인 성향을 지닌다)
//
//}

// 04 논리연산자

//#include <stdio.h>
//int main() {
//	// AND 연산자(&&)
//	// 1. 왼쪽의 조건식이 거짓이면 오른쪽 조건식을 평가하지 않는다.
//	// 2. "&&" 연산자는 일반적으로 "||" 연산자보다 우선순위가 높.
//	// 3. "&&" 연산자의 결과는 논리값(참 또는 거짓)이다.
//	/*int a = 10, b = 20;
//	printf("a >= 10 && a < 20 ? %d\n", a >= 10 && a < 20);*/
//
//	// OR 연산자 ||
//	// 1. 둘 중에 하나만 맞아도 참으로 인식한다.
//	/*int a = 5, b = 9;
//	printf("a == b || a < b ? %d\n", a == b || a < b);
//	printf("a > 5 || b > 10 ? %d\n", a > 5 || b > 10);*/
//	
//	 // NOT 연산자(!)
//	//printf("!참 ? %d\n", !10);
//	//printf("!거짓 ? %d\n", !0);
//}

//#include < stdio.h>
//int main() {
//	int a = 0, b = 0, c = 0;
//	// 키보드로 각각 정수값을 입력받아 a,b,c 변수에 저장합니다.
//
//	// 각 문장을 보면서 문장에 맞게 적절히 and, or 연산자기호를 써서 출력합니다.
//	// 1) a가 b와 같고 a는 10보다 크고 b도 10보다 큰지 출력(출력결과는 0or1)
//	// 2) a가 b보다 크면서 a가 0이 아닌지 확인하여 출력(출력결과는 0or1)
//	// 3) a가 5보다 크거나 b가 10보다 작은지 확인하여 출력(출력결과는 0or1)
//	// 4) a가 b보다 크고 a가 c보다 크고 a가 0이 아닌지 확인하여 출력(출력결과는 0or1)
//	printf("정수값 a,b,c 순으로 입력해주세요 : ");
//	scanf_s("%d\n%d\n%d", &a, &b, &c, sizeof(a), sizeof(b), sizeof(c));
//	printf("a == b && a > 10 && b > 10 ? %d\n", a == b && a > 10 && b > 10);
//	printf("a > b && a != 0 ? %d\n", a > b && a != 0);
//	printf("a > 5 || b < 10 ? %d\n", a > 5 || b < 10);
//	printf("a > b && a > c && a != 0 ? %d\n", a > b && a > c && a != 0);
//
//}

// 증감연산자(++,--)
// 전치연산자(++a, --a) : 변수값을 1증가(혹은 1감소) 이후에 다른 연산 처리
// 후치연산자(a++, a--) : 다른 연산 처리 이후에 1증가(혹은 1감소)

//#include <stdio.h>
//int main() {
//	int a = 10, b = 20, c = 0, d = 0, e = 0;
//	c = ++a + ++b;		// a = 11, b = 21, c = 32
//	printf("%d\n", c);
//
//	d = a++ + b++;
//	printf("%d\n", d);	// a = 12, b = 22, c = 32, d=32
//	printf("%d\n", d);
//	e = ++a + b-- + ++c + d--;	// a = 13, b = 22, c = 33, d = 32
//	printf("%d\n", e);
//}

// 06 응용 증감연산자 + 논리연산자
//#include <stdio.h>
//int main() {
//	int a = 1, b = 1, c = 0, d = 5;
//
//	c = --a && b++; // 이 시점의 a는 0이고 b는 1이다.
//	printf("%d\n", a);
//	printf("%d\n", b);
//	d = ++a && b++;	// a = 1, b = 2(3) // 이 시점의 a는 1이고 b는 2이다.
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);	// a=1, b=2, c=0, d=1
//	
//	return 0;
//}

// 07 삼항 연산자
// (조건식) 참인 경우 실행코드: 거짓인 경우 실행코드;

//#include <stdio.h>
//int main() {
//	int a = 0, b = 0;
//	printf("a,b값 입력 >>");
//	scanf_s("%d%d", &a, &b);
//	(a > b) ? printf("큰 수는 : %d\n", a) : printf("큰 수 : %d\n", b);
//	// -> if 문으로 대체
//}

// 08 %연산자 정리

//#include <stdio.h>
//int main() {
//	// 1. 짝/홀수 구분
//	//int num = 0;
//	//printf("정수를 입력하세요 >> ");
//	//scanf_s("%d", &num);
//	//// 삼항 연산자를 이용해서 짝수인지, 홀수인지를 출력하도록 하시오.
//	//// (num % 2 == 0) ? printf("%d는 짝수입니다.", num) : printf("%d는 홀수입니다.", num);
//	//// 삼항 연산자를 이용해서 3의 배수인지 아닌지를 출력해 보시오.
//	//// (num % 3 == 0) ? printf("%d는 3의 배수이다.", num) : printf("%d는 3의 배수가 아니다.", num);
//	//// 짝수이면서 3의 배수인지 확인해보시오.(hint : and연산자)
//	//// (num % 2 == 0 && num % 3 == 0) ? printf("%d는 짝수이면서 3의 배수이다.", num) : printf("%d는 짝수가 아닐수도, 3의 배수가 아닐수도 있다.", num);
//
//	int n = 54321;
//	printf("오른쪽 끝한자리 = %d\n", n % 10);
//	printf("오른쪽 끝두자리 = %d\n", n % 100);
//	printf("오른쪽 끝세자리 = %d\n", n % 1000);
//	printf("오른쪽 끝네자리 = %d\n", n % 10000);
//	printf("===================================\n");
//	printf("왼쪽 끝 한자리 = %d\n", n / 10000);
//	printf("왼쪽 끝 두자리 = %d\n", n / 1000);
//	printf("왼쪽 끝 세자리 = %d\n", n / 100);
//	printf("왼쪽 끝 네자리 = %d", n / 10);
//
//}

// 문제
// 1. 다음은 실수형 변수 x에 대해 x를 2로 나눈 몫을 구하는 코드이다.
//
//#include <stdio.h>
//int main() {
//	float x = 5.6;
//	int y;
//
//	y = (int)x / 2;
//	
//	printf("x를 2로 나눈 몫 : %d\n", y);
//}