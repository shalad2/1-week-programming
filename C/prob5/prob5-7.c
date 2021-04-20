#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n[5];
    int i, sum = 0;
    double avg;
    srand((unsigned)time(NULL));
    for(i = 0; i <= 4; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
        sum += n[i];
    }
    printf("\n\n");

    avg = sum / 5.0;
    printf("合計値：%d\n", sum);
    printf("平均値：%.1f\n", avg);
    printf("\n");

    printf("平均値より大きい数：");
    for(i = 0; i <= 4; i++){
        if(n[i] > avg){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
    printf("平均値より小さい数：");
    for(i = 0; i <= 4; i++){
        if(n[i] < avg){
            printf("%d ", n[i]);
        }
    }
    printf("\n");
}