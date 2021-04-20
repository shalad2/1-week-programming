#include <stdio.h>
#include <stdlib.h>

#define SIZE    6

int main(void){
    double *a = NULL;
    int i;
    a = (double*)malloc(sizeof(double)*SIZE);
    for(i = 0; i < SIZE; i++){
        a[i] = 0.1 * i;
    }
    for(i = 0; i < SIZE; i++){
        printf("%f ", a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}