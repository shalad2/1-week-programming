#include <stdio.h>

int main(void){
    int i, n, sum = 0;
    printf("10000以下の完全数：");
    for(n = 1; n <= 10000; n++){
        for(i = 1; i < n; i++){
           if(n % i == 0){
               sum += i;
           } 
        }
        if(sum == n){
            printf("%d ", n);
        }
        sum = 0;
    }
    printf("\n");
    return 0;
}