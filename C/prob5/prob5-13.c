#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int n[3][3];
    int i, j, n_max = 0, n_min = 9;
    srand((unsigned)time(NULL));
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            n[i][j] = rand() % 10;
            printf("%d ", n[i][j]);
            if(n[i][j] >= n_max){
                n_max = n[i][j];
            }
            if(n[i][j] <= n_min){
                n_min = n[i][j];
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("最大値：%d\n", n_max);
    printf("最小値：%d\n", n_min);
    return 0;
}