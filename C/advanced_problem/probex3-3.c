#include <stdio.h>
#include <string.h>

int main(void){
    int n, product;
    printf("Input Number(0-255): ");
    scanf("%d", &n);
    for(int i = 0; i < 8; i++){
        product = n & 0x80;
        if(product == 0x00){
            printf("0");
        }else{
            printf("1");
        }
        n = n << 1;
    }
    printf("\n");
    return 0;
}