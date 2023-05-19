#include <stdio.h>

int main(void) {
    int i = 0;
    for (i = 0; i < 10; ++i){
        if(i > 4)
            continue;
        printf("%dth\n", i);
    }
    printf("End: i == %dth\n", i);
    return 0;
}
/*
0th
1th
2th
3th
4th
End: i == 10th
*/