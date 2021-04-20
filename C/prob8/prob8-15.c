#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void prime(int);

int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 99 + 2;
    prime(n);
    return 0;
}

void prime(int num){
    int n_const = num;
    int j = 0, p[n_const];
    for(int i = 2; i <= num; i++){
        if(num % i == 0){
            p[j] = i;
            j++;
            num /= i;
            i = 1;
        }
    }
    printf("%d = ", n_const);
    for(int k = 0; k < j; k++){
        printf("%d", p[k]);
        if(k < j - 1){
            printf(" * ");
        }
    }
    printf("\n");
}