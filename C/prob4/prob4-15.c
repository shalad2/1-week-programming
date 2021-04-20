#include <stdio.h>

void main(){
    int n = 1;
    while(n <= 100){
        printf("%3d ", n);
        if(n % 10 == 0){
            printf("\n");
        }
        n++;
    }
}