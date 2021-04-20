#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n;
    srand((unsigned)time(NULL));
    while(1){
        n = rand() % 100 + 1;
        printf("%d\n", n);
        if(n % 10 == 0){
            break;
        }
    }
    printf("終了します\n");
}