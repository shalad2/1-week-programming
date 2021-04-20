#include <stdio.h>

void square(int, int);

void main(){
    int a, b;
    printf("たて：");
    scanf("%d", &a);
    printf("よこ：");
    scanf("%d", &b);
    square(a, b);
}

void square(int n1, int n2){
    int i, j;
    for(i = 0; i < n1; i++){
        for(j = 0; j < n2; j++){
            printf("■ ");
        }
        printf("\n");
    }
    printf("\n");
}