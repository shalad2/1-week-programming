#include <stdio.h>

void stars(int);

void main(){
    int n;
    printf("表示する回数を入力してください：");
    scanf("%d", &n);
    stars(n);
}

void stars(int num){
    int i;
    if(num > 0){
        for(i = 0; i < num; i++){
            printf("★ ");
        }
        printf("\n");
    }else{
        printf("0より大きい値を入力してください。\n");
    }
}