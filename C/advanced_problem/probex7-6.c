#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    int c;
    int i = 0, j = 0, count = 0;
    char s[8][16];
    file = fopen("./probex7/words2.txt", "r");
    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }
    while((c = fgetc(file)) != EOF){
        if(c == 0x2c){
            s[i][j] = '\0';
            i++;
            j = 0;
        }else if(c != 0x20){
            s[i][j] = (char)c;
            j++;
        }
    }
    s[i][j] = '\0';
    printf("aから始まる単語\n");
    for(int k = 0; k <= i; k++){
        if(s[k][0] == 0x61){
            printf("%s\n", s[k]);
            count++;
        }
    }
    printf("--------\n個数：%d\n", count);
    return 0;
}