// ����, ���α׷��ӽ�

// C����� �޸� ����

// ���α׷��� �����ϸ� �ü���� �޸� ������ �����Ѵ�. �޸� ������ ȿ�������� �����ϱ� ���� ������ ������ ���� ����.

// �ڵ念�� : �ڵ念���� ���α׷��� �ڵ带 �����ϴ� �޸� �����̴�. ���α׷��� ����� �� ��ǻ���� �߾�ó����ġ(CPU)�� ������ �ִ� �ڵ带 ������ ������� �����Ѵ�. (���������� ������ = ��������)

// ������ ����(���� ���� ����) : ������ ���� �Ҵ�Ǵ� �����̴�. ���α׷� ���۰� ���ÿ� �޸� ������ �Ҵ��. ���α׷��� ������ ������ ��� ������ ���¸� �����Ѵ�. statice ����, ���α׷� ��𿡼��� ������ �� �ִ�.

// ���� ���� : ������ ���� �Ҵ�Ǵ� �����̴�. ���� �������� ���� ������ �Բ� ���޵Ǵ� ���ڰ� ����ȴ�. �Լ� ȣ��� ���õ� ��������, �Ű�����, ��ȯ �ּ� �� �Լ� ȣ�⿡ �ʿ��� �ٸ� ������ ����ȴ�.

// �� ���� : (Heep)

// ���α׷����� �������� �Ҵ�� �޸𸮰� ����ȴ�.
// ���� ���α׷����� �ʿ��Ѹ�ŭ �޸𸮸� �������� �Ҵ��ϰ� ������ �� �ִ�.
// �Ϲ������� �޸� ������ ���� ������ �����ϱ� ���� ������ �Ҵ��� �޸𸮴� �ݵ�� ���α׷����� �����ؾ� �Ѵ�.

// 1. ���� ������ ���� �����Ͻÿ�

// 2. �ش��ϴ� ��ĭ�� �˸��� ���� �����ÿ�.
// num1�� num2�� 000 ���� ����� 000 �����̸� a�� b�� 000 �Լ��� 000 �����̴�.
// ���� sum�� 000 �Լ� ������ ����� 000 �����̴�.

// num1�� num2�� �����Լ� ���� ����� ���������̸� a�� b�� addNumbers �Լ��� ���������̴�.
// ���� sum�� addNumbers �Լ� ������ ����� ���������̴�.
// �Ű������� ���������̴�.
// #inlcude <stdio.h>
//int addNumbers(int a, int b) {
//	int sum = a + b;
//	return sum;
//}
//int main() {
//	int num1 = 3;
//	int num2 = 5;
//	int result = addNumbers(num1, num2);
//	printf("The result if %d\n", result);
//	return 0;
//}

// 3. �ش��ϴ� ��ĭ�� �˸��� ���� �����ÿ�.

// ���⼭ globalVariable�� ���������̸�, pi�� ���������̴�.
//#include <stdio.h>
//
//int globalVariable = 10;
//const float pi = 3.14;
//
//int main() {
//	printf("The value of glovalVariable is %d\n", globalVariable);
//	printf("The value of pi is %f\n", pi);
//	return 0;
//}