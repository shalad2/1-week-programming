#include <stdio.h>

double circumference(double);
double area(double);

void main(){
    double r, l, S;
    printf("円の半径：");
    scanf("%lf", &r);
    l = circumference(r);
    S = area(r);
    printf("円周の長さ：%lf\n", l);
    printf("面積：%lf\n", S);
}

double circumference(double n){
    return 2 * 3.14 * n;
}
double area(double n){
    return 3.14 * n * n;
}