#include <stdio.h>

void main(){
    int a;
    printf("数値を入力：");
    scanf("%d", &a);
    if(a != 1){
        printf("1ではありません\n");
    }
}