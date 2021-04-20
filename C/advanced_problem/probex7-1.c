#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    file = fopen("./probex7/HelloWorld.txt", "w");
    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }
    fprintf(file, "HelloWorld.\n");
    fclose(file);
    return 0;
}