// 문제 : 다음의 C언어 프로그램을 작성해보세요.

// 1. 조건문을 사용하여 정수를 입력받아 양수, 음수, 0 중 어느것인지 확인하는 프로그램을 작성하세요.
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수를 입력하세요 >> ");
//	scanf_s("%d", &num);
//	if (num > 0)
//	{
//		printf("양의 정수입니다.");
//	}
//	else if (num < 0)
//	{
//		printf("음의 정수입니다.");
//	}
//	else
//	{
//		printf("0입니다.");
//	}
// return 0;
//}

// 2. 반복문을 사용하여 1부터 10까지의 합을 구하는 프로그램을 작성하세요
//#include <stdio.h>
//int main() {
//	int sum = 0;
//	for (int i = 0; i < 11; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 10까지의 합 : %d\n", sum);
//	return 0;
//}

// 3. 1차원 배열을 사용하여 5개의 정수를 입력받고, 그 합을 구하는 프로그램을 작성하세요.
//#include <stdio.h>
//
//int main() {
//    // 5개의 정수를 저장할 배열 선언
//    int numbers[5];
//    int sum = 0;
//
//    // 사용자로부터 5개의 정수를 입력받음
//    printf("5개의 정수를 입력하세요:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("정수 입력>>");
//        scanf_s("%d", &numbers[i]);
//
//        // 입력된 정수를 합에 더함
//        sum += numbers[i];
//    }
//
//    // 입력된 정수와 합을 출력
//    printf("\n입력된 정수: ");
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", numbers[i]);
//    }
//
//    printf("\n합계: %d\n", sum);
//
//    return 0;
//}

// 4. 포인터를 사용하여 두 개의 정수를 입력받아, 그 합과 차를 구하는 프로그램을 작성하세요.
//#include <stdio.h>
//
//int main() {
//    // 두 개의 정수를 저장할 변수 선언
//    int num1, num2;
//
//    // 포인터 변수 선언
//    int* ptr1, * ptr2;
//
//    // 포인터 변수에 각각의 변수의 주소를 할당
//    ptr1 = &num1;
//    ptr2 = &num2;
//
//    // 사용자로부터 두 개의 정수를 입력받음
//    printf("두 개의 정수를 입력하세요:\n");
//    printf("정수 1 입력: ");
//    scanf_s("%d", ptr1);
//
//    printf("정수 2 입력: ");
//    scanf_s("%d", ptr2);
//
//    // 합과 차를 계산
//    int sum = *ptr1 + *ptr2;
//    int diff = *ptr1 - *ptr2;
//
//    // 합과 차를 출력
//    printf("\n입력된 정수: %d, %d\n", *ptr1, *ptr2);
//    printf("합계: %d\n", sum);
//    printf("차이: %d\n", diff);
//
//    return 0;
//}
