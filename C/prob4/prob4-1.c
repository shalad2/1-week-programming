#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i, n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    for(i = 1; i <= n; i++){
        printf("■ ");
    }
    printf("\n");
}