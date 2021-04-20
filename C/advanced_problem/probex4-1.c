#include <stdio.h>

int main(void){
    int Nums[] = {1, 2, 3, 4, 5};
    int *p = NULL;
    int i;
    p = Nums;
    for(i = 0; i < 5; i++){
        printf("%d ", *(p + 4));
        p--;
    }
    printf("\n");
    return 0;
}