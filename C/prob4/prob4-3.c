#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i = 1, n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    do{
        printf("■ ");
        i++;
    }while(i <= n);
    printf("\n");
}