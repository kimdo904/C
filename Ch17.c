// 문제 : 계산기를 만든다.

// 1. 1번은 덧셈 2번은 뺄셈 3번은 곱셈 4번은 나눗셈 5번은 나눈값의 나머지가 나오도록 만드시오.

// 2. 숫자는 임의의 숫자를 받아 나누도록 하시오.

//#include <stdio.h>
//int main() {
//	int num1 = 0, num2 = 0;
//	int a = 0;
//	printf("숫자를 입력하세요 >>");
//	scanf_s("%d%d", &num1, &num2);
//	printf(" 1번은 덧셈 2번은 뺄셈 3번은 곱셈 4번은 나눗셈 5번은 나눈값의 나머지인데 원하는 계산이 뭔가요?");
//	scanf_s("%d", &a);
//
//	switch (a)
//	{
//	case 1:
//		printf("%d + %d = %d", num1, num2, num1 + num2);
//		break;
//	case 2:
//		printf("%d - %d = %d", num1, num2, num1 - num2);
//		break;
//	case 3:
//		printf("%d * %d = %d", num1, num2, num1 * num2);
//		break;
//	case 4:
//		printf("%d / %d = %d", num1, num2, num1 / num2);
//		break;
//	case 5:
//		printf("%d % %d = %d", num1, num2, num1 % num2);
//		break;
//	}
//}

//#include <stdio.h>
//
//int main() {
//    char operator;
//    double num1, num2, result;
//
//    // 연산자와 두 숫자를 입력 받음
//    printf("연산자를 입력하세요 (+, -, *, /): ");
//    scanf(" %c", &operator);
//
//    printf("두 숫자를 입력하세요: ");
//    scanf("%lf %lf", &num1, &num2);
//
//    // 입력 받은 연산자에 따라 계산 수행
//    switch (operator) {
//    case '+':
//        result = num1 + num2;
//        break;
//    case '-':
//        result = num1 - num2;
//        break;
//    case '*':
//        result = num1 * num2;
//        break;
//    case '/':
//        if (num2 != 0) {
//            result = num1 / num2;
//        }
//        else {
//            printf("0으로 나눌 수 없습니다.\n");
//            return 1;  // 프로그램 종료
//        }
//        break;
//    default:
//        printf("올바른 연산자를 입력하세요.\n");
//        return 1;  // 프로그램 종료
//    }
//
//    // 계산 결과 출력
//    printf("결과: %.2f\n", result);
//
//    return 0;
//}
