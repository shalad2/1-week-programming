#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char s[17];
    char *p = NULL; 
    int l;
    printf("文字列を入力（最大16文字）：");
    scanf("%16[^\n]%*c", s);
    l = strlen(s);
    p = (char*)malloc(sizeof(char)*(l + 1));
    for(int i = 0; i < l; i++){
        p[i] = s[l - (i + 1)];
    }
    printf("%s\n", p);
    free(p);
    return 0;
}