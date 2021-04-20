#include <stdio.h>
#include <stdlib.h>

#define SIZE    256

int main(void){
    FILE *file;
    char s[SIZE];
    file = fopen("./probex7/data.txt", "w");
    if(file == NULL){
        printf("ファイルが開けません\n");
        exit(1);
    }
    while(1){
        printf("文字列を入力してください：");
        scanf("%[^\n]%*c", s);
        if(s[0] == 0x71 && s[1] == 0x00){
            break;
        }
        fprintf(file, "%s\n", s);
        s[0] = '\0';
    }
    fclose(file);
    return 0;
}