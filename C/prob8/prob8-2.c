#include <stdio.h>

void main(){
    int a, b, c;
    for(a = 1; a <= 100; a++){
        for(b = 1; b <= 100; b++){
            for(c = 1; c <= 100; c++){
                if(a < b && a * a + b * b == c * c){
                        printf("%d * %d + %d * %d = %d * %d = %d\n", a, a, b, b, c, c, c * c);
                }
            }
        }
    }

}