#include <stdio.h>

void main(){
    int n;
    printf("西暦：");
    scanf("%d", &n);
    if(n % 400 == 0){
        printf("閏年です\n");
    }else if(n % 100 == 0){
        printf("閏年ではありません\n");
    }else if(n % 4 == 0){
        printf("閏年です\n");
    }else{
        printf("閏年ではありません\n");
    }
}