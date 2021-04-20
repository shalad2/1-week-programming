#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n[10];
    int i;
    srand((unsigned)time(NULL));
    for(i = 0; i < 10; i++){
        n[i] = rand() % 100 + 1;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    printf("50以上の数：");
    for(i = 0; i < 10; i++){
        if(n[i] >= 50){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
    printf("50未満の数：");
    for(i = 0; i < 10; i++){
        if(n[i] < 50){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
}