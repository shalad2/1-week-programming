#include <stdio.h>

int get_absolute(int);

void main(){
    int n;
    int abs;
    printf("数値を入力してください：");
    scanf("%d", &n);
    abs = get_absolute(n);
    printf("%d\n", abs);
}

int get_absolute(int num){
    if(num >= 0){
        return num;
    }else{
        return num * -1;
    }
}