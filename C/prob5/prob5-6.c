#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n[10];
    int i, n_max = 0, n_min = 10;
    srand((unsigned)time(NULL));
    for(i = 1; i <= 10; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
        if(n[i] >= n_max){
            n_max = n[i];
        }
        if(n[i] <= n_min){
            n_min = n[i];
        }
    }
    printf("\n");
    printf("\n");
    printf("最大値：%d\n", n_max);
    printf("最小値：%d\n", n_min);
}