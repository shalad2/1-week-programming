#include <stdio.h>
#include <string.h>

int main(void){
    char s[256];
    int l;
    printf("文字列を入力：");
    scanf("%[^\n]%*c", s);
    l = strlen(s);
    printf("文字列の長さ：%d文字\n", l);
    return 0;
}