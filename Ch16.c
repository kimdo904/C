// 문제 : 키오스크를 만든다.

// 기능1 : 음료를 선택하면 음료의 가격이 나온다.
// 기능2 : 돈이 없으면 결제가 안된다.
// 기능3 : 사용자는 정수만 입력가능하다.
// 기능4 : 사용자가 가진 돈으로 음료를 몇 개나 살 수 있을지 알려준다.
// 기능5 : -1을 입력하면 키오스크가 종료가 된다. 단 c언어로 만들어야 한다.


// chatGPT를 이용하여 키오스크를 만들어 보시오.

// chatGPT 쓸 때 주의할 점 
// 1. AI를 어떻게 잘 쓸 것인가?
// 2. 내가 이 코드에 대해 모르는 부분이 있는가?(찾아봐야 함)
// 3. 다른 오류는 없는가?

// 일단 본인이 생각해봐서 풀어보기.
// 구글 -> 구글링해서 다른 사람이 어떻게 했는지
// 최후의 수단 : GPT


// 단 본인이 여기에 작성하는 일은 없어야 한다.

// 얘가 틀렸을 경우도 존재한다.
// scanf를 써서 실행이 안됨 -> scanf_s를 고쳐줘야 실행이 된다.


//#include <stdio.h>
//
//int main() {
//    int money;
//
//    // 사용자로부터 초기 돈을 입력받음
//    printf("초기 돈을 입력하세요: ");
//    if (scanf_s("%d", &money) != 1 || money < 0) {
//        printf("잘못된 입력입니다. 음수가 아닌 정수를 입력하세요.\n");
//        return 1;  // 오류 코드로 프로그램 종료
//    }
//
//    while (1) {
//        // 사용 가능한 음료 및 가격 표시
//        printf("\n사용 가능한 음료:\n");
//        printf("1: 콜라 - 100원\n");
//        printf("2: 사이다 - 80원\n");
//        printf("3: 물 - 50원\n");
//        printf("-1: 종료\n");
//
//        // 사용자가 음료를 선택
//        printf("음료를 선택하세요 (-1 입력 시 종료): ");
//        int choice;
//        if (scanf_s("%d", &choice) != 1) {
//            printf("잘못된 입력입니다. 유효한 정수를 입력하세요.\n");
//            while (getchar() != '\n');  // 입력 버퍼 비우기
//            continue;
//        }
//
//        // -1이 입력되면 프로그램 종료
//        if (choice == -1) {
//            printf("키오스크가 닫혔습니다.\n");
//            break;
//        }
//
//        // 사용자의 선택에 따라 가격 결정
//        int price;
//        switch (choice) {
//        case 1:
//            price = 100;  // 콜라의 가격은 100원
//            break;
//        case 2:
//            price = 80;   // 사이다의 가격은 80원
//            break;
//        case 3:
//            price = 50;   // 물의 가격은 50원
//            break;
//        default:
//            printf("잘못된 선택입니다. 유효한 옵션을 선택하세요.\n");
//            continue;
//        }
//
//        // 사용자가 충분한 돈을 가지고 있는지 확인
//        if (money < price) {
//            printf("자금이 부족합니다. 더 싼 음료를 선택하거나 종료하세요.\n");
//        }
//        else {
//            // 사용자가 음료를 살 수 있는 경우
//            int quantity = money / price;
//            printf("%d원으로 %d개의 음료를 구매할 수 있습니다. 남은 돈: %d원\n",
//                money, quantity, money - (quantity * price));
//            break;  // 구매 후 프로그램 종료
//        }
//    }
//
//    return 0;
//}

