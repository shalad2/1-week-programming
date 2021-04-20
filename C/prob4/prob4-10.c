#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int i, n;
    srand((unsigned)time(NULL));
    for(i = 1; i <= 5; i++){
        n = rand() % 100 + 1;
        printf("%d\n", n);
    }
}