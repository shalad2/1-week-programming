#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE    10

void change(int *);

int main(void){
    int n[SIZE];
    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++){
        n[i] = rand() % 100 + 1;
    }
    change(n);
    return 0;
}

void change(int *num){
    int k, temp;
    int time = 0, max = 0;
    for(int i = 0; i < SIZE; i++){
        for(int j = time; j < SIZE; j++){
            if(num[j] >= max){
                max = num[j];
                k = j;
            }
        }
        temp = num[time];
        num[time] = max;
        num[k] = temp;
        printf("%d ", num[time]);
        time++;
        max = 0;
    }
    printf("\n");
}