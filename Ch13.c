//#include <stdio.h>
//int main() {
//	int grade[10] = { 34,55,60,120,504,50,120,30,40,51 };
//	printf("===========================");
//	printf("인덱스				값\n");
//	printf("===========================");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d				%d\n", i, grade[i]);
//	}
//}

//#include <stdio.h>
//
//#define Students 5
//
//int main() {
//	int grade[Students];
//	int sum = 0;
//	int avg = 0;
//	// 문제 : 학생들의 성적을 입력받아 성적평균을 내시오.
//	
//	for (int n= 0; n < Students; n++)
//	{
//		printf("%d번째 학생의 성적을 입력하세요 >>>", n+1);
//		scanf_s("%d", &grade[n]);
//	
//	}
//	for (int  n = 0; n < Students; n++)
//	{
//		sum += grade[n];
//	}
//	avg = sum / Students;
//	printf("학생들의 성적평균은 %d입니다.", avg);
//	return 0;
//}



// 널 문자와 문자열
// C언어에서는 문자열은 널(NULL) 문자로 끝나므로 문자열을 사용할 때는 항상 Null 문자를 고려해야 한다. 널 문자가 없는 문자열을 사용하면 문자열의 끝을 판별할 수 없으므로 메모리에 문제가 생겼다.

//#include <stdio.h>
//int main() {
//	/*char goodbye[11] = "GOOD BYE!";
//	printf("%s\n", goodbye);*/
//
//	// 문제 
//	// 1. 크기가 10인 int형 배열을 선언하고, 모든 요소를 0으로 초기화하는 코드를 작성하세요.
//	int arr[10] = { 0 };
//	printf("%d\n", arr);
//	// 2. 크기가 5인 double형 배열을 선언하고, 사용자로부터 값을 입력받아 배열 요소에 저장하는 코드를 작성하세요.
//	double arr2[5];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번째 값을 입력하세요:", i+1);
//		scanf_s("%lf", &arr2[i]);
//	}
//	printf("%lf\n", arr2);
//	// 3. 크기가 7인 char형 배열을 선언하고, "hello" 문자열을 저장하는 코드를 작성하세요.
//	char hello[7] = "hello";
//	printf("%s\n", hello);
//	// 4. 크기가 6인 int형 배열을 선언하고, 첫번째 요소부터 여섯번째 요소까지 순서대로 1,2,3,4,5,6을 저장하는 코드를 작성하세요.
//	int arr3[6] = { 1,2,3,4,5,6 };
//	// 5. 크기가 8인 int형 배열을 선언하고 배열의 요소를 1부터 8까지의 값으로 초기화하는 코드를 작성하세요.
//	int arr4[8];
//	for (int i = 0; i < 8; i++)
//	{
//		arr4[i] = i + 1;		// arr4의 요소에 1부터 8까지의 값 저장
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10, 5, 7, 4, 8 };
//	int min = arr[0];	// 배열의 첫 번째 값을 최소값으로 초기화
//	// 문제 : 배열의 요소들 중에서 최소값을 찾으시오.
//	for (int i = 0; i < 5; i++)
//	{
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//	printf("배열에서 가장 작은 값 : %d", min);
//
//}

// 문제 : 배열에서 특정한 값을 찾아 그 위치를 출력하는 프로그램을 작성하시오.

//#include <stdio.h>
//
//int main() {
//	int arr[5] = { 2, 5, 8, 1, 3 };
//	int n;
//	int found = 0;
//
//	printf("찾을 값을 입력하세요>>>");
//	scanf_s("%d", &n);
//	// 배열의 요소들 중에서 찾으려는 값과 일치하는 값이 있는 위치 출력
//	for (int i = 0; i < 5; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("%d는 배열의 %d번째 위치에 있습니다.", n, i + 1);
//			found = 1;
//		}
//	}
//	if (!found) // 찾으려는 값이 배열에 없는 경우
//	{
//		printf("%d는 배열에 없습니다.\n");
//	}
//	return 0;
//}