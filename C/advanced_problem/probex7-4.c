#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    int c;
    file = fopen("./probex7/words.txt", "r");
    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }
    while((c = fgetc(file)) != EOF){
        if(c == 0x2c){
            printf("\n");
        }else if(c != 0x20){
            printf("%c", (char)c);
        }
    }
    printf("\n");
    return 0;
}