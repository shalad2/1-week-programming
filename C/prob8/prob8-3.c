#include <stdio.h>

int fact(int);

void main(){
    int n, result;
    printf("数値を入力してください：");
    scanf("%d", &n);
    result = fact(n);
    printf("%dの階乗は、%dです。\n", n, result);
}

int fact(int num){
    int i, x = 1;
    for(i = 1; i <= num; i++){
        x *= i;
    }
    return x;
}