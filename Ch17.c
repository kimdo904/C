// ���� : ���⸦ �����.

// 1. 1���� ���� 2���� ���� 3���� ���� 4���� ������ 5���� �������� �������� �������� ����ÿ�.

// 2. ���ڴ� ������ ���ڸ� �޾� �������� �Ͻÿ�.

//#include <stdio.h>
//int main() {
//	int num1 = 0, num2 = 0;
//	int a = 0;
//	printf("���ڸ� �Է��ϼ��� >>");
//	scanf_s("%d%d", &num1, &num2);
//	printf(" 1���� ���� 2���� ���� 3���� ���� 4���� ������ 5���� �������� �������ε� ���ϴ� ����� ������?");
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
//    // �����ڿ� �� ���ڸ� �Է� ����
//    printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
//    scanf(" %c", &operator);
//
//    printf("�� ���ڸ� �Է��ϼ���: ");
//    scanf("%lf %lf", &num1, &num2);
//
//    // �Է� ���� �����ڿ� ���� ��� ����
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
//            printf("0���� ���� �� �����ϴ�.\n");
//            return 1;  // ���α׷� ����
//        }
//        break;
//    default:
//        printf("�ùٸ� �����ڸ� �Է��ϼ���.\n");
//        return 1;  // ���α׷� ����
//    }
//
//    // ��� ��� ���
//    printf("���: %.2f\n", result);
//
//    return 0;
//}
