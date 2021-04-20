#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    int c, sum = 0;
    int i = 0, j = 0;
    char n[8][8];
    file = fopen("./probex7/nums.txt", "r");
    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }
    while((c = fgetc(file)) != EOF){
        if(c == 0x2c){
            n[i][j] = '\0';
            sum += atoi(n[i]);
            i++;
            j = 0;
        }else if(c != 0x20){
            n[i][j] = (char)c;
            j++;
        }
    }
    n[i][j] = '\0';
    sum += atoi(n[i]);
    for(int k = 0; k <= i; k++){
        printf("%s\n", n[k]);
    }
    printf("---------\n");
    printf("合計：%d\n", sum);
    return 0;
}