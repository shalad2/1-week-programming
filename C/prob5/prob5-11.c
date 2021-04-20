#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int n[5], count[] = {0, 0, 0};
    int i;

    srand((unsigned)time(NULL));
    for(i = 0; i < 5; i++){
        n[i] = rand() % 100 + 1;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    printf("0以上60未満：");
    for(i = 0; i < 5; i++){
        if(n[i] >= 0 && n[i] < 60){
            printf("%d ", n[i]);
            count[0]++;
        }
    }
    if(count[0] == 0){
        printf("なし");
    }
    printf("\n");
    printf("60以上80未満：");
    for(i = 0; i < 5; i++){
        if(n[i] >= 60 && n[i] < 80){
            printf("%d ", n[i]);
            count[1]++;
        }
    }
    if(count[1] == 0){
        printf("なし");
    }
    printf("\n");
    printf("80以上：");
    for(i = 0; i < 5; i++){
        if(n[i] >= 80){
            printf("%d ", n[i]);
            count[2]++;
        }
    }
    if(count[2] == 0){
        printf("なし");
    }
    printf("\n");
}