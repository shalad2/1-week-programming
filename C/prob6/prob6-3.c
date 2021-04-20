#include <stdio.h>

double triangle(double, double);

void main(){
    double teihen, takasa;
    double menseki;
    printf("底辺 = ");
    scanf("%lf", &teihen);
    printf("高さ = ");
    scanf("%lf", &takasa);
    menseki = triangle(teihen, takasa);
    printf("三角形の面積 = %lf\n", menseki);
}

double triangle(double n1, double n2){
    return n1 * n2 * 0.5;
}