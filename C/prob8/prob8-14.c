#include <stdio.h>

void calc(int *);

int main(void){
    int i, num[99];
    for(i = 0; i < 99; i++){
        num[i] = i + 2;
    }
    calc(num);
    return 0;
}

void calc(int *temp){
    int size = 99;
    int k = 0, x, y = 1;
    while(1){
        for(x = k; x < size; x++){
            if(temp[x] % temp[k] != 0){
                temp[y] = temp[x];
                y++;
            }
        }
        size = y;
        k++;
        y = k + 1;
        if(temp[k] == temp[size]){
            break;
        }
    }
    for(int j = 0; j < size; j++){
        printf("%d ", temp[j]);
    }
    printf("\n");
}