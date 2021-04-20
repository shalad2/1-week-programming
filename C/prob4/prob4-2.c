#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i = 1, n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    while(i <= n){
        printf("■ ");
        i++;
    }
    printf("\n");
}