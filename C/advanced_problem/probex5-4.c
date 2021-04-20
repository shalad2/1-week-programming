#include <stdio.h>

int length(char *);

int main(void){
    char s[256];
    int l;
    printf("文字列を入力：");
    scanf("%[^\n]%*c", s);
    l = length(s);
    printf("文字列の長さ：%d文字\n", l);
    return 0;
}

int length(char *str){
    int count = 0;
    while(1){
        if(str[count] == 0x00){
            break;
        }
        count++;
    }
    return count;
}