// 01 break;
// 반복문 탈출에 사용 or switch의 case 탈출에 사용
//
//#include <stdio.h>
//int main() {
//	int tmp = 0;	// 키보드로 값을 받는 임시변수
//	int sum = 0;	// 값누적 변수
//	while (1)
//	{
//		printf("값입력(-1은 종료이다.)");
//		scanf_s("%d", &tmp);
//		if (tmp == -1)
//		{
//			break;
//		}
//		sum += tmp;	// sum = sum +tmp
//	}
//	printf("누적합 %d\n", sum);
//}

// 02 중첩 while문 전체 벗어나기
// 5 x 5 = 25 까지만 출력하기 나머지 출력X

//#include <stdio.h>
//int main() {
//	int dan = 2;
//	int i = 1;
//	int flag = 0;	//반복문 중에 사용되는 값
//
//	while (dan <= 9)
//	{
//		i = 1;
//		while (i <= 9)
//		{
//			printf("%d x %d = %d\n", dan, i, dan * i);
//			if (dan == 5 && i == 5)
//			{
//				flag = 1;	// 바깥 while 문을 탈출하기 위해 값을 변경시킨다.
//				break;
//			}
//			i++;
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		printf("\n");
//		dan++;
//	}
//}

// 03 continue;
// continue는 C언어에서 제공하는 제어문 중 하나로 반복문에서 사용된다.
// continue를 만나면 현재 실행중인 반복문의 나머지 부분을 건너뛰고, 다음 반복을 시작한다.

// 1부터 10까지의 수 중에서 3의 배수는 제외하고 출력
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i % 3 ==0)
//		{
//			i++;
//			continue;
//		}
//		printf("i = %d\n", i);
//		i++;
//	}
//}

// 문제
// while문에서 continue랑 break문을 사용하여 1부터 100까지의 수 중에서
// 5의 배수만 더하고, 50을 넘어가면 반복문을 중단하시오.

// 내가 푼 방법
//#include <stdio.h>
//int main() {
//	int i = 1;
//	int sum = 0;
//	while (i <=100)
//	{
//		i++;
//		if (i % 5 == 0)
//		{
//			if (sum<=50)
//			{
//				printf("%d\n", i);
//				sum += i;
//			}
//			else
//			{
//				break;
//			}
//		}
//		else
//		{
//			continue;
//		}
//	}
//	printf("더한값 : %d\n", sum);
//}

// 강사님 풀이
//#include <stdio.h>
//int main() {
//	int i = 1;
//	int sum = 0;
//	while (i <= 100)
//	{
//		if (i % 5 != 0)
//		{
//			i++;
//			continue;
//		}
//		sum += i;
//		printf("%d\n", i);
//		if (sum > 50)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("더한값 : %d\n", sum);
//	return 0;
//}