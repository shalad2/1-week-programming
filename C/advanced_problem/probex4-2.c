#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int i;

void showResult(int *);
void power_2(int *);

int main(void){
    int n[5];
    srand((unsigned)time(NULL));
    for(i = 0; i < 5; i++){
        n[i] = rand() % 100 + 1;
    }
    printf("発生した乱数：\n");
    showResult(n);
    power_2(n);
    printf("2倍した数：\n");
    showResult(n);
    return 0;
}

void showResult(int *num){
    for(i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

void power_2(int *num){
    for(i = 0; i < 5; i++){
        num[i] *= 2;
    }
}