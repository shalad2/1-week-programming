#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n[10];
    int i;
    srand((unsigned)time(NULL));
    for(i = 1; i <= 10; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
    }
    printf("\n");
    printf("\n");
    printf("5以上の数：");
    for(i = 1; i <= 10; i++){
        if(n[i] >= 5){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
    printf("5未満の数：");
    for(i = 1; i <= 10; i++){
        if(n[i] < 5){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
}