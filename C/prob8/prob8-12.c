#include <stdio.h>

int main(void){
    int i = 0;
    int n[30];
    n[0] = 1, n[1] = 1, n[2] = 2;
    while(1){
        n[i + 3] = n[i + 2] + n[i + 1] + n[i];
        if(n[i+3] > 30){
            break;
        } 
        i++;
    }
    for(int j = 0; j < i + 3; j++){
        printf("%d ", n[j]);
    }
    printf("\n");
}