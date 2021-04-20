#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE    256

int main(void){
    char *a = NULL, *b = NULL, *s = NULL;
    a = (char*)malloc(sizeof(char)*SIZE);
    b = (char*)malloc(sizeof(char)*SIZE);
    s = (char*)malloc(sizeof(char)*SIZE);
    printf("文字列1：");
    scanf("%s", a);
    strcpy(s, a);
    printf("文字列2：");
    scanf("%s", b);
    strcat(s, b);
    free(a);
    free(b);
    printf("結合した結果：\n%s\n", s);
    free(s);
    return 0;
}