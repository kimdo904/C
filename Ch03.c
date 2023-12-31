// (자료)형 변환\

// 자동형변환(암시적형변환) : 컴파일러(컴퓨터)에 의해 자동형변환
// 강제형변환(명시적형변환) : 프로그래머에 의한 강제 형변환

// 01 자동형변환
// 자료형 변환시 데이터 손실가능성이 낮을 때 컴파일러(C언어 프로그램)에 의해 자동으로 자료형 변환
// ex) 큰 공간 = 작은 값

// 자동형변환 순서
// char < short < int < long < long long < float < double

//# include <stdio.h>
//int main() {
//	short svar = 10;
//	int ivar = svar;	// 자동형변환(큰공간 == 작은 값)
//	printf("invar=%d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar;
//	printf("ivar = %d\n", ivar);
//
//	long long Ivar = ivar;	//(주의) 자동형변환이 되기는 하나 좋은 방법이 아니다. 공간 차이가 너무 크다.
//	printf("Ivar=%d\n", Ivar);
//
//	float fvar = Ivar;
//	printf("fvar = %fv\n", fvar);
//
//	double dvar = Ivar;
//	printf("dvar = %f\n", dvar);
//}

// 02 강제형변환
// 프로그래머에 의해 특정한 자료형으로 강제 형변환 하는 경우
// 단점 : 데이터 손실 가능성이 높다.


//#include <stdio.h>
//int main()
//{
//	// int : 약 -21억 ~ +21억까지	short : 2바이트, 약 -32000 ~ +32000		char : -128 ~ +127
//	int ivar = 50000;
//	short svar = (short)ivar;	// 강제 형변환
//	char cvar = (char)ivar;		// 강제 형변환
//	printf("svar = %d\n", svar);
//	printf("cvar = %d\n", cvar);
//}

 //03 연산시 자동(강제) 형변환(나눗셈)

//#include <stdio.h>
//int main() {
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	double r2 = (float)num / div;
//
//	printf("r1 = %f\n", r1);
//	printf("r2 = %f\n", r2);
//
//}