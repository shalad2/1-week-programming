#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, n;
    srand((unsigned)time(NULL));
    n = rand() % 1000 + 1;
    printf("数値：%d\n", n);
    printf("約数：");
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}