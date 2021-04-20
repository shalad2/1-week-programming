#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n[3][3];
    int i, j;
    srand((unsigned)time(NULL));
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            n[i][j] = rand() % 10;
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
}