#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n[5];
    int i, j;
    srand((unsigned)time(NULL));
    for(i = 0; i < 5; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    for(i = 0; i < 5; i++){
        for(j = 1; j <= n[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}    