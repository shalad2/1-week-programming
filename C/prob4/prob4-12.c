#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i, n, n_min = 100;
    srand((unsigned)time(NULL));
    for(i = 1; i <= 5; i++){
        n = rand() % 100 + 1;
        printf("%d\n", n);
        if(n <= n_min){
            n_min = n;
        }
    }
    printf("最小値：%d\n", n_min);
}