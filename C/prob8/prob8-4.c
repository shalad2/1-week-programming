#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int digit(int);

void main(){
    int n, dig;
    srand((unsigned)time(NULL));
    n = rand() % 1000 + 1;
    dig = digit(n);
    printf("数値：%d  桁数%d\n", n, dig);
}

int digit(int num){
    if(num < 10){
        return 1;
    }else if(num < 100){
        return 2;
    }else if(num < 1000){
        return 3;
    }else{
        return 4;
    }
}