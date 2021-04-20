#include <stdio.h>
#include <string.h>

int main(void){
    char a[256], b[256];
    printf("文字列1：");
    scanf("%[^\n]%*c", a);
    printf("文字列2；");
    scanf("%[^\n]%*c", b);
    if(strcmp(a, b) == 0){
        printf("同じものです\n");
    }else{
        printf("異なるものです\n");
    }
    return 0;
}