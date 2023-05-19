#include <stdio.h>

int main(void) {
    int input = -1;
    do {
        printf("Input number : ");
        scanf("%d", &input);
    } while (input < 0 || input > 10);
    puts("End");
    return 0;
}