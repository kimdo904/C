// 01 Switch��(���ߺб�)
// ���α׷��ֿ��� ���ǹ� �� �ϳ���, ���ǿ� ����, �ٸ� �ڵ带 ������ �� ���ȴ�.
// switch�������� �ϳ��� ������ ���� �������� ������ �����Ͽ� �� ���Ǹ��� ������ �ڵ带 �����Ѵ�.

// switch (����)
// {
// case ��1:
//			������ �ڵ�1;
//			break;
// case ��2:
//			������ �ڵ�2;
//			break;
// default:
//			break;
// }

// case : if ���̸鼭 else if���̱⵵ �ϴ�.
// break : �ش��ڵ带 �����ϰ� ���� ���߰� �����.
// default : else���̴�.(case�� ���� ���ప�� �ƹ��͵� ���� ���� ��)

//#include <stdio.h>
//int main() {
//	int num = 0;
//	printf("���� �Է� >>");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 �Է½� ����Ǵ� �ڵ��");
//		break;
//	case 2:
//		printf("2 �Է½� ����Ǵ� �ڵ��");
//		break;
//	case 3:
//		printf("3 �Է½� ����Ǵ� �ڵ��");
//		break;
//	default:
//		printf("�� �� ������ ����Ǵ� �ڵ��");
//		break;
//	}
//}

// ���� : 1 ~ 12������ ������ ��¥�� switch���� ������ �����Բ� ����� ���ʽÿ�.
// �� 1~12 �̿��� ���ڰ� ���� ��"�߸��� �Է��Դϴ�." �� �������� �Ͻʽÿ�.

//#include <stdio.h>
//int main() {
//	int month = 0;
//	printf("1���� 12������ ���ڸ� �Է��ϼ��� >>");
//	scanf_s("%d", &month);
//
//	switch (month)
//	{
//	case 1:
//		printf("31\n");
//		break;
//	case 2:
//		printf("28\n");
//		break;
//	case 3:
//		printf("31\n");
//		break;
//	case 4:
//		printf("30\n");
//		break;
//	case 5:
//		printf("31\n");
//		break;
//	case 6:
//		printf("30\n");
//		break;
//	case 7:
//		printf("31\n");
//		break;
//	case 8:
//		printf("31\n");
//		break;
//	case 9:
//		printf("30\n");
//		break;
//	case 10:
//		printf("31\n");
//		break;
//	case 11:
//		printf("30\n");
//		break;
//	case 12:
//		printf("31\n");
//		break;
//	default:
//		printf("�߸��� �Է��Դϴ�.");
//		break;
//	}
//}