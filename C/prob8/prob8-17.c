#include <stdio.h>

#define SIZE    10000

void divsor(int *, int *);

int main(void){
    int a[SIZE], b[SIZE];   
    for(int i = 0; i < SIZE; i++){
        a[i] = i + 1;
        b[i] = i + 1;
    }
    divsor(a, b);
    return 0;
}

void divsor(int *m, int *n){
    int sum_m[SIZE], sum_n[SIZE];
    for(int i = 0; i < SIZE; i++){
        for(int j = 1; j <= SIZE; j++){
            if(m[i] % j == 0 && m[i] != j){
                sum_m[i] += j;
            }
            if(n[i] % j == 0 && n[i] != j){
                sum_n[i] += j;
            }
        }
    }
    for(int i = 0; i <SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(m[i] < n[j] && m[i] == sum_n[j] && n[j] == sum_m[i]){
                printf("(%d, %d)\n", m[i], n[j]);
            }
        }
    }
}