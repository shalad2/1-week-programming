#include <stdio.h>
#include <math.h>

double calc(double, double, double, double);

int main(void){
    double x1, x2, y1, y2, d;
    printf("1つ目のベクトルのX：");
    scanf("%lf", &x1);
    printf("1つ目のベクトルのY：");
    scanf("%lf", &y1);
    printf("2つ目のベクトルのX：");
    scanf("%lf", &x2);
    printf("2つ目のベクトルのX：");
    scanf("%lf", &y2);
    d = calc(x1, y1, x2, y2);
    printf("(%lf, %lf)と(%lf, %lf)の距離は、%lfです。\n", x1, y1, x2, y2, d);
    return 0;
}

double calc(double X1, double Y1, double X2, double Y2){
    double dX_2, dY_2;
    dX_2 = pow(X2 - X1, 2.0);
    dY_2 = pow(Y2 - Y1, 2.0);
    return sqrt(dX_2 + dY_2);
}