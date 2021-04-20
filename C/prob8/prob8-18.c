#include <stdio.h>

#define SIZE    50


void experiment(int *);
int count_open(int *);


int main(void){
    int l[SIZE];
    int n;
    for(int i = 0; i < SIZE; i++){
        l[i] = 1;
    }
    experiment(l);
    n = count_open(l);
    printf("扉が空いているロッカーは、%d個\n", n);
    return 0;
}


void experiment(int *Locker){
    for(int Num = 1; Num <= SIZE; Num++){
        for(int i = 1; i <= SIZE; i++){
            if(i % Num == 0){
                Locker[i] *= -1;
            }
        }
    }
}

int count_open(int *result){
    int open_locker = 0;
    for(int i = 0; i < SIZE; i++){
        if(result[i] == -1){
            open_locker++;
        }
    }
    return open_locker;
}