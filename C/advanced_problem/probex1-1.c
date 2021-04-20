#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int n[5];
    srand((unsigned)time(NULL));
    for(int i = 0; i < 5; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}