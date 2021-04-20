#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void showResult(int **temp);

int main(void){
    int m[2][3];
    int *m_temp[2];
    srand((unsigned)time(NULL));
    for(int i1 = 0; i1 < 2; i1++){
        for(int i2 = 0; i2 < 2; i2++){
            m[i1][i2] = rand() % 10 + 1;
        }
    }
    m[0][2] = m[0][0] * m[0][1];
    m[1][2] = m[1][0] * m[0][1] + m[1][1] * m[0][0];

    for(int i3 = 0; i3 < 2; i3++){
        m_temp[i3] = m[i3];
    }
    showResult(m_temp);
    return 0;
}

void showResult(int **temp){
    int const_m[2][3];
    for(int j1 = 0; j1 < 2; j1++){
        for(int j2 = 0; j2 < 3; j2++){
            const_m[j1][j2] = temp[j1][j2];
        }
    }

    // printf("%d/%d + %d/%d = %d/%d\n", const_m[1][0], const_m[0][0], const_m[1][1], const_m[0][1], const_m[1][2], const_m[0][2]);

    for(int k = 0; k < 3; k++){
        if(const_m[1][k] % const_m[0][k] == 0){
            printf("%d", const_m[1][k] / const_m[0][k]);
        }else if(const_m[1][k] < const_m[0][k]){
            int r1 = temp[0][k] % temp[1][k];
            while(r1 != 0){
                temp[0][k] = temp[1][k];
                temp[1][k] = r1;
                r1 = temp[0][k] % temp[1][k];
            }
            printf("%d/%d", const_m[1][k] / temp[1][k], const_m[0][k] / temp[1][k]);
        }else{
            int n[2][3], num[3];
            int r2 = temp[1][k] % temp[0][k];
            while(r2 != 0){
                temp[1][k] = temp[0][k];
                temp[0][k] = r2;
                r2 = temp[1][k] % temp[0][k];
            } 
            n[0][k] = const_m[0][k] / temp[0][k];
            n[1][k] = const_m[1][k] / temp[0][k];
            num[k] = n[1][k] / n[0][k];
            printf("%d.%d/%d", num[k], n[1][k] - num[k] * n[0][k], n[0][k]);
        }
        switch(k){
            case 0:
                printf(" + ");
                break;
            case 1:
                printf(" = ");
                break;
            case 2:
                printf("\n");
                break;
        }
    }
}
