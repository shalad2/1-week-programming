#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE    5

int main(void){
    int a[SIZE];
    int x = 0, y = 0, z = 0;
    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++){
        a[i] = rand() % 101;
        printf("a[%d]=%d  ", i, a[i]);
        if(a[i] >= 20 && a[i] <= 50){
            x++;
        }else if(a[i] > 80){
            y++;
        }else if(a[i] >= 0 && a[i] < 10){
            z++;
        }
    }
    printf("\n");
    printf("20以上50以下の数：%d個\n", x);
    printf("80より大きい数：%d個\n", y);
    printf("0以上10未満の数：%d個\n", z);
    return 0;
}