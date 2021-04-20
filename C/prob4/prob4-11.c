#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i, n, n_max = 0;
    srand((unsigned)time(NULL));
    for(i = 1; i <= 5; i++){
        n = rand() % 100 + 1;
        printf("%d\n", n);
        if(n >= n_max){
            n_max = n;
        }
    }
    printf("最大値：%d\n", n_max);
}