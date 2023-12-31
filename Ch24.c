// 함수 심화
// 배열을 전달받는 함수에 대해
// 배열은 여러 개의 데이터를 하나의 변수에 저장하기 위해 사용하는 자료형이다.
// 함수에서 배열을 전달받을 때에는 배열의 이름을 그대로 함수에 인자로 전달한다.
// 이때 배열의 이름은 '첫 번째 요소의 주소를 나타낸다.' 함수에서는 전달받은 배열의 첫 번째 요소를 가리키는 포인터 변수를 선언하여 사용한다.

//#include <stdio.h>
//void printArray(int *arr, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	// 위 함수는 배열의 첫 번째 요소를 가리키는 포인터 변수 'arr'과 배열의 크기 'size'를 인자로 전달받는다. 그리고 for문을 사용해 배열의 각 요소를 출력한다.
//}
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//
//	printArray(arr, 5);
//	// printfArray 함수에서는 'arr' 배열의 첫 번째 요소를 가리키는 포인터 변수 'arr'을 사용하여 배열의 모든 요소를 출력할 수 있다.
//}

// Call-by-value, Call-by-reference

// 값에 의한 호출, 참조에 의한 호출

// Call-by-value : 값에 의한 호출
// 함수 호출 시 인자로 전달되는 값이 복사되어 함수 내부로 전달된다.
// 함수 내부에서 인자 값이 변경되어도, 함수를 호출한 곳에서는 영향을 받지 않는다.

//#include <stdio.h>
//
//void swap(int x, int y) {
//	int temp = x;
//	x = y;
//	y = temp;
//	// 두 개의 정수를 서로 바꾸는 함수
//	// 이 함수는 값을 복사해서 처리하기 때문에 함수를 호출한 곳에서는 아무 변화가 없다.
//}
//
//int main() {
//	int a = 10, b = 20;
//	swap(a, b);
//	printf("a = %d, b = %d\n", a, b);
//}

// Call-by-reference (참조에 의한 호출)
// 함수 호출 시 인자로 전달되는 값의 주소가 함수 내부로 전달된다
// 함수 내부에서 인자 값이 변경되면, 함수를 호출한 곳에서도 영향을 받음.

//#include <stdio.h>
//
//void swap(int* x, int* y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//	// 위 함수는 두 개의 정수를 받아서 서로 바꾸는 함수이다.
//	// 포인터 변수를 사용하여 인자의 값을 변경한다.
//	// 이렇게 하면 함수를 호출한 곳에서도 영향을 받는다.
//}
//
//int main() {
//	int a = 10, b = 20;
//	printf("%d%d\n", &a, &b);
//	swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//}

// 문제 : 주어진 정수 배열에서 가장 큰 값을 찾는 함수 'findMax'를 작성하시오.
//
//#include <stdio.h>
//
//int findMax(int *arr, int size) {
//	int max_num = arr[0];	// 배열의 첫번째 요소를 최대값으로 초기화
//	for (int i = 0; i < size; i++)
//	{	
//		if (max_num < arr[i])
//		{
//			max_num = arr[i];	// 더 큰 값을 발견하면 업데이트
//		}
//	}
//	return max_num;
//}
//int main() {
//	int arr[] = { 12, 45, 7, 56, 89, 23, 9 };
//	int size;
//	size = sizeof(arr)/ sizeof(arr[0]);
//
//	int max = findMax(arr, size);
//
//	printf("배열에서 가장 큰 값 : %d\n", max);
//}

// 사용자로부터 행과 열의 크기를 입력받은 후, 해당 크기의 2차원 정수 배열을 생성하고 사용자로부터 값을 입력받아 배열을 초기화한 다음, 배열의 각 행과 합을 계산해 출력하는 프로그램을 작성하시오.

//#include <stdio.h>
//
//int main() {
//	int row;
//	int col;
//	printf("행의 크기 입력 >>>");
//	scanf_s("%d", row);
//	printf("열의 크기 입력 >>>");
//	scanf_s("%d", col);
//	int arr[row][col];
//
//	// 배열 초기화
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("arr[%d][%d] 값을 입력하세요>>", i ,j);
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	// 각 행의 합 출력
//	printf("각 행의 합 출력 : \n");
//	for (int i = 0; i < row; i++)
//	{
//		int rowSum = 0;
//		for (int j = 0; j < col; j++)
//		{
//			rowSum += arr[i][j];
//		}
//		printf("행 %d의 합 : %d\n", i, rowSum);
//	}
//
//	// 각 열의 합 출력
//	printf("각 열의 합 출력 : \n");
//	for (int j = 0; j < col; j++)
//	{
//		int colSum = 0;
//		for (int i = 0; i < row; i++)
//		{
//			colSum += arr[i][j];
//		}
//		printf("열 %d의 합 : %d\n", j, colSum);
//	}
//} 