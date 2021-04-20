#include <stdio.h>

int add(int, int);
int sub(int, int);

void main(){
    int a, b;
    int add_result, sub_result;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    add_result = add(a, b);
    sub_result = sub(a, b);
    printf("%d + %d = %d\n", a, b, add_result);
    printf("%d - %d = %d\n", a, b, sub_result);
}

int add(int n1, int n2){
    return n1 + n2;
}
int sub(int n1, int n2){
    return n1 - n2;
}