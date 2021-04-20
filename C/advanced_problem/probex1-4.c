#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a, b;
    srand((unsigned)time(NULL));
    for(int i = 0; i < 6; i++){
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        printf("%d + %d = %d\n", a, b, a + b);
    }
    return 0;
}