#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE    4

int main(void){
    int a[SIZE];
    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++){
        a[i] = rand() % 21 - 10;
        printf("%dつ目の数値：%d  絶対値%d\n", i + 1, a[i], abs(a[i]));
    }
    return 0;
}