#include <stdio.h>

int main(void){
    int m, n;
    scanf("%d%d", &m, &n);

    int list[m][n];

    int i = 0, j = n - 1, iMax = m - 1, jMax = n - 1, di = 0, dj = -1, iMin = 1, jMin = 0;
    
    for(int k = 1 ; k <= n * m ; k++) {
        list[i][j] = k;
        if(j == jMax && dj == 1) di = -1, dj = 0, jMax--;
        if(i == iMax && di == 1) di = 0, dj = 1, iMax--;
        if(j == jMin && dj == -1) di = 1, dj = 0, jMin++;
        if(i == iMin && di == -1) di = 0, dj = -1, iMin++;
        i += di;
        j += dj;
    }
    printf("===[%3d  *%3d  ]===\n", m, n);

    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++) {
            printf("%4d", list[i][j]);
        }
        putchar('\n');
    }
    printf("==================\n");

    return 0;
}