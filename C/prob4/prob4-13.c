#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i, n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    if(n >= 5){
        for(i = 1; i <= n; i++){
            printf("★ ");
        }
        printf("\n");
    }else{
        printf("発生した数値：%d\n", n);
    } 
}