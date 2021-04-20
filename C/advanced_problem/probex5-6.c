#include <stdio.h>

void compare(char *, char *);

int main(void){
    char a[256], b[256];
    printf("文字列1：");
    scanf("%[^\n]%*c", a);
    printf("文字列2：");
    scanf("%[^\n]%*c", b);
    compare(a, b);
    return 0;
}

void compare(char *s1, char *s2){
    int i = 0;
    while(1){
        if(s1[i] != s2[i]){
            printf("異なるものです\n");
            break;
        }else if(s1[i] == 0x00 && s2[i] == 0x00){
            printf("同じものです\n");
            break;
        }else{
            i++;
        }
    }
}