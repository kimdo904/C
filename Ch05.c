// 01 ���������(+,-,*,/,%)
//#include <stdio.h>
//int main() {
//	int a = 10, b = 20, c = 0;
//	printf("a + b = %d\n", a + b);
//	printf("a - b = %d\n", a - b);
//	printf("a * b = %d\n", a * b);
//	printf("a / b = %d\n", a / b);		// ������(���� ���ϴ� ������)
//	printf("a % b = %d\n", a % b);		// ������ �� �������� ���ϴ� ������(�������� ���ϴ� ������)
//}

// 02 ���մ���{������(+=, -=, *=, /=, %=)
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

// 03 �� ������

// �� : 0�� �ƴ� ��� ��(��ǥ�� : 1)
// ���� : 0

//#include <stdio.h>
//int main() {
//	int a = 10, b = 20, c = 0;
//	printf("a = b ? %d\n", a == b);
//	printf("a > b ? %d\n", a > b);
//	printf("a >= b ? %d\n", a >= b);
//	printf("a < b ? %d\n", a < b);
//	printf("a != b ? %d\n", a != b);		// a�� b�� �ٸ���? (! �� �ݴ����� ������ ���Ѵ�)
//
//}

// 04 ����������

//#include <stdio.h>
//int main() {
//	// AND ������(&&)
//	// 1. ������ ���ǽ��� �����̸� ������ ���ǽ��� ������ �ʴ´�.
//	// 2. "&&" �����ڴ� �Ϲ������� "||" �����ں��� �켱������ ��.
//	// 3. "&&" �������� ����� ������(�� �Ǵ� ����)�̴�.
//	/*int a = 10, b = 20;
//	printf("a >= 10 && a < 20 ? %d\n", a >= 10 && a < 20);*/
//
//	// OR ������ ||
//	// 1. �� �߿� �ϳ��� �¾Ƶ� ������ �ν��Ѵ�.
//	/*int a = 5, b = 9;
//	printf("a == b || a < b ? %d\n", a == b || a < b);
//	printf("a > 5 || b > 10 ? %d\n", a > 5 || b > 10);*/
//	
//	 // NOT ������(!)
//	//printf("!�� ? %d\n", !10);
//	//printf("!���� ? %d\n", !0);
//}

//#include < stdio.h>
//int main() {
//	int a = 0, b = 0, c = 0;
//	// Ű����� ���� �������� �Է¹޾� a,b,c ������ �����մϴ�.
//
//	// �� ������ ���鼭 ���忡 �°� ������ and, or �����ڱ�ȣ�� �Ἥ ����մϴ�.
//	// 1) a�� b�� ���� a�� 10���� ũ�� b�� 10���� ū�� ���(��°���� 0or1)
//	// 2) a�� b���� ũ�鼭 a�� 0�� �ƴ��� Ȯ���Ͽ� ���(��°���� 0or1)
//	// 3) a�� 5���� ũ�ų� b�� 10���� ������ Ȯ���Ͽ� ���(��°���� 0or1)
//	// 4) a�� b���� ũ�� a�� c���� ũ�� a�� 0�� �ƴ��� Ȯ���Ͽ� ���(��°���� 0or1)
//	printf("������ a,b,c ������ �Է����ּ��� : ");
//	scanf_s("%d\n%d\n%d", &a, &b, &c, sizeof(a), sizeof(b), sizeof(c));
//	printf("a == b && a > 10 && b > 10 ? %d\n", a == b && a > 10 && b > 10);
//	printf("a > b && a != 0 ? %d\n", a > b && a != 0);
//	printf("a > 5 || b < 10 ? %d\n", a > 5 || b < 10);
//	printf("a > b && a > c && a != 0 ? %d\n", a > b && a > c && a != 0);
//
//}

// ����������(++,--)
// ��ġ������(++a, --a) : �������� 1����(Ȥ�� 1����) ���Ŀ� �ٸ� ���� ó��
// ��ġ������(a++, a--) : �ٸ� ���� ó�� ���Ŀ� 1����(Ȥ�� 1����)

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

// 06 ���� ���������� + ����������
//#include <stdio.h>
//int main() {
//	int a = 1, b = 1, c = 0, d = 5;
//
//	c = --a && b++; // �� ������ a�� 0�̰� b�� 1�̴�.
//	printf("%d\n", a);
//	printf("%d\n", b);
//	d = ++a && b++;	// a = 1, b = 2(3) // �� ������ a�� 1�̰� b�� 2�̴�.
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);	// a=1, b=2, c=0, d=1
//	
//	return 0;
//}

// 07 ���� ������
// (���ǽ�) ���� ��� �����ڵ�: ������ ��� �����ڵ�;

//#include <stdio.h>
//int main() {
//	int a = 0, b = 0;
//	printf("a,b�� �Է� >>");
//	scanf_s("%d%d", &a, &b);
//	(a > b) ? printf("ū ���� : %d\n", a) : printf("ū �� : %d\n", b);
//	// -> if ������ ��ü
//}

// 08 %������ ����

//#include <stdio.h>
//int main() {
//	// 1. ¦/Ȧ�� ����
//	//int num = 0;
//	//printf("������ �Է��ϼ��� >> ");
//	//scanf_s("%d", &num);
//	//// ���� �����ڸ� �̿��ؼ� ¦������, Ȧ�������� ����ϵ��� �Ͻÿ�.
//	//// (num % 2 == 0) ? printf("%d�� ¦���Դϴ�.", num) : printf("%d�� Ȧ���Դϴ�.", num);
//	//// ���� �����ڸ� �̿��ؼ� 3�� ������� �ƴ����� ����� ���ÿ�.
//	//// (num % 3 == 0) ? printf("%d�� 3�� ����̴�.", num) : printf("%d�� 3�� ����� �ƴϴ�.", num);
//	//// ¦���̸鼭 3�� ������� Ȯ���غ��ÿ�.(hint : and������)
//	//// (num % 2 == 0 && num % 3 == 0) ? printf("%d�� ¦���̸鼭 3�� ����̴�.", num) : printf("%d�� ¦���� �ƴҼ���, 3�� ����� �ƴҼ��� �ִ�.", num);
//
//	int n = 54321;
//	printf("������ �����ڸ� = %d\n", n % 10);
//	printf("������ �����ڸ� = %d\n", n % 100);
//	printf("������ �����ڸ� = %d\n", n % 1000);
//	printf("������ �����ڸ� = %d\n", n % 10000);
//	printf("===================================\n");
//	printf("���� �� ���ڸ� = %d\n", n / 10000);
//	printf("���� �� ���ڸ� = %d\n", n / 1000);
//	printf("���� �� ���ڸ� = %d\n", n / 100);
//	printf("���� �� ���ڸ� = %d", n / 10);
//
//}

// ����
// 1. ������ �Ǽ��� ���� x�� ���� x�� 2�� ���� ���� ���ϴ� �ڵ��̴�.
//
//#include <stdio.h>
//int main() {
//	float x = 5.6;
//	int y;
//
//	y = (int)x / 2;
//	
//	printf("x�� 2�� ���� �� : %d\n", y);
//}