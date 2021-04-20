#include <stdio.h>

void main(){
    int i;
    for(i = 1; i <= 100; i++){
        if((i % 3 == 0) || (i >= 30 && i < 40) || (i % 10 == 3)){
            printf("%d ", i);
        }
    }
    printf("\n");
}