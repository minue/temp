#include <stdio.h>

int main(void) {
    int count = 0, sum = 0;
    for (int i = 1 ; i <= 100; i++){
        count += !(i%4);
        sum += (!(i%4)) * i;
    }
    printf("1 ~ 100까지의 4의 배수의 수 : %d\n", count);
    printf("1 ~ 100까지의 4의 배수의 합 : %d\n", sum);
    return 0;
}