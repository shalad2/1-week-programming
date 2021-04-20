#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void calc(int*);

int main(void){
    int m[4];
    srand((unsigned)time(NULL));
    for(int i = 0; i < 4; i++){
        if(i < 2){
            m[i] = rand() % 10 + 1;
        }else{
            m[i] = rand() % 9 + 2;
        }
    }
    calc(m);
    return 0;
}

void calc(int *temp){
    int x = *(temp + 2) * *(temp + 3);
    int y = *temp * *(temp + 3) + *(temp + 1) * *(temp + 2);
    int x_const = x, y_const = y, z = x * y;
    if(y % x == 0){
        printf("%d/%d + %d/%d = %d\n", temp[0], temp[2], temp[1], temp[3], y / x);
    }else if(x > y){
        int r1 = x % y;
        while(r1 != 0){
            x = y;
            y = r1;
            r1 = x % y;
        }
        printf("%d/%d + %d/%d = %d/%d\n", temp[0], temp[2], temp[1], temp[3], y_const / y, x_const / y);
    }else{
        int p, q, num;
        int r2 = y % x;
        while(r2 != 0){
            y = x;
            x = r2;
            r2 = y % x;
        }
        p = x_const / x;
        q = y_const / x;
        num = q / p;
        printf("%d/%d + %d/%d = %d.%d/%d\n", temp[0], temp[2], temp[1], temp[3], num, q - num * p, p);
    }
}