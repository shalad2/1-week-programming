#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i, n[5], p_count = 0, n_count = 0, zero = 0;
    srand((unsigned)time(NULL));
    for(i = 0; i <= 4; i++){
        n[i] = rand() % 21 - 10;
        printf("%d ", n[i]);
        if(n[i] > 0){
            p_count++;
        }else if(n[i] < 0){
            n_count++;
        }else{
            zero++;
        }
    }
    printf("\n\n");

    printf("0より大きい数：%d個\n", p_count);
    printf("0より小さい数：%d個\n", n_count);
    printf("0の個数：%d個\n", zero);
}