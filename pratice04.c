#include <stdio.h>

int main(void){
    int m, n;
    float x, y;
    char str1[32], str2[32];

    scanf("%d", &m);
    scanf("%f%g", &x, &y);
    scanf("%s %s", str1, str2);
    scanf("%*s%*c%d", &n);

    printf("m = %d, n = %d\n", m, n);
    printf("x = %g, y = %g\n", x, y);
    printf("%s %s\n", str1, str2);
    
    return 0;
}