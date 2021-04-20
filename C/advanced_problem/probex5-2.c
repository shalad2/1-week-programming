#include <stdio.h>
#include <stdlib.h>

#define SIZE    256

void add(char *, char *, char *);

int main(void){
    char *a = NULL, *b = NULL, *s = NULL;
    a = (char*)malloc(sizeof(char)*SIZE); 
    b = (char*)malloc(sizeof(char)*SIZE); 
    s = (char*)malloc(sizeof(char)*SIZE);        
    printf("文字列1：");
    scanf("%s", a);
    printf("文字列2：");
    scanf("%s", b);
    add(a, b, s);
    free(a);
    free(b);
    printf("結合した結果：\n%s\n", s);
    free(s);
    return 0;
}

void add(char *str1, char *str2, char *str_add){
    int i = 0, j = 0;
    while(1){
        if(str1[i] == 0x00){
            break;
        }
        str_add[i] = str1[i];
        i++;
    }
    while(1){
        if(str2[j] == 0x00){
            break;
        }
        str_add[i] = str2[j];
        i++, j++;
    }
}