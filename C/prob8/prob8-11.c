#include <stdio.h>

int main(void){
    int x = 1, y = 1, z;
    int i = 0, n[40];
    n[i] = x, i++;
    n[i] = y, i++;
    z = x + y;
    n[i] = z, i++;
    do{
        x = y;
        y = z;
        z = x + y;
        n[i] = z, i++;
    }while(z <= 40);

    for(int j = 0; j < i - 1; j++){
        printf("%d ", n[j]);
    }
    printf("\n");
}