#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 3 + 1;
    printf("数値：%d\n", n);
    if(n == 1){
        printf("グー\n");
    }else if(n == 2){
        printf("パー\n");
    }else{
        printf("チョキ\n");
    }
}