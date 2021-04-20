#include <stdio.h>
#include <string.h>

int main(void){
    char s[3][256];
    int l[3], max = 0;
    for(int i = 0; i < 3; i++){
        printf("文字列%d：", i + 1);
        scanf("%[^\n]%*c", s[i]);
        l[i] = strlen(s[i]);
        if(l[i] >= max){
            max = l[i];
        }
    }
    printf("\n");
    printf("最も長い文字列：\n");
    for(int i = 0; i < 3; i++){
        if(l[i] == max){
            printf("%s\n", s[i]);
        }
    }
    return 0;
}