#include <stdio.h>

int main(void){
    char book[32] = "부분과 전체";
    float cost = 12.99;
    float percent = 80.0;

    printf("신간 \"%s\"를 $%4.2f에 판매합니다.\n본 판매가는 정가에서 %.0f%% 할인된 가격입니다.\n", book, cost, percent);

    return 0;
}