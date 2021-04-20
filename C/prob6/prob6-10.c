#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main(void){
    int a, b;
    int gcd_ab, lcm_ab;
    printf("1つ目の値を入力してください：");
    scanf("%d", &a);
    printf("2つ目の値を入力してください：");
    scanf("%d", &b);
    gcd_ab = gcd(a, b);
    lcm_ab = lcm(a, b);
    printf("\n");
    printf("2つの数の最小公倍数は、%dです。\n", lcm_ab);
    printf("2つの数の最大公約数は、%dです。\n", gcd_ab);
    return 0;
}

int gcd(int m, int n){
    int r, tmp;
    if(m < n){
        tmp = m;
        m = n;
        n = tmp;
    }
    r = m % n;
    while(r != 0){
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}
int lcm(int x, int y){
    int z = x * y;
    int gcd_xy;
    gcd_xy = gcd(x, y);
    return z / gcd_xy;
}