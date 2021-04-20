#include <stdio.h>
#include <stdlib.h>

#define SIZE    256

int main(void){
    FILE *file;
    char line[SIZE];
    line[0] = '\0';
    file = fopen("./probex7/sample.txt", "r");
    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }
    while(fgets(line, SIZE, file) != NULL){
        printf("%s", line);
    }
    printf("\n");
    fclose(file);
    return 0;
}