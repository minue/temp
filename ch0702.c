#include <stdio.h>

int main(void) {
    for (int i = 0 ; i < 5; i++){
        for (int j = 0 ; j < 4 - i; j++){
            printf("  ");
        }
        for (int j = 0 ; j < i + 1; j++){
            printf("*   ");
        }
        printf("\n");
    }
}