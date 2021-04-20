#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void numbers(int, int *);
void set(int *, int *);


int main(void){
    int one = 1, two = 2;
    int a[10], b[10];
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; i++){
        a[i] = rand() % 10 + 1;
        b[i] = rand() % 10 + 1;
    }
    numbers(one, a);
    numbers(two, b);
    set(a, b);
    return 0;
}


void numbers(int num,int *series){
    printf("配列%d：", num);
    for(int j = 0; j < 10; j++){
        printf("%d ", series[j]);
    }
    printf("\n");
}

void set(int *temp1, int *temp2){
    int inter[10], sum[10];
    int k0 = 0, k1, k2, k3, k4;

    printf("共通の数：");
    for(k1 = 1; k1 <= 10; k1++){
        for(k2 = 0; k2 < 10; k2++){
            for(k3 = 0; k3 < 10; k3++){
                if(k1 == temp1[k2] && k1 == temp2[k3]){
                    inter[k0] = k1;
                }
            }
        }
        if(inter[k0] == k1){
            k0++;
        }
    }
    for(k4 = 0; k4 < k0; k4++){
        printf("%d ", inter[k4]);
    }
    printf("\n");

    k0 = 0;
    printf("どちらかに入っている数：");
    for(k1 = 1; k1 <= 10; k1++){
        for(k2 = 0; k2 < 10; k2++){
            for(k3 = 0; k3 < 10; k3++){
                if(k1 == temp1[k2] || k1 == temp2[k3]){
                    sum[k0] = k1;
                }
            }
        }
        if(sum[k0] == k1){
            k0++;
        }
    }
    for(k4 = 0; k4 < k0; k4++){
        printf("%d ", sum[k4]);
    }
    printf("\n");

}