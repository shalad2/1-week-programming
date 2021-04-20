#include <stdio.h>

typedef struct{
    int month;
    int household;
    int food;
    int clothing;
    int education;
    int medical;
    int others;
    int total;
}kakei;

void setData(kakei *, int, int, int, int, int, int, int);
void goukei(kakei *);
int max_Medical(kakei *);
int max_Food(kakei *);

int main(void){
    kakei expense[6];
    int month[] = {1, 2, 3, 4, 5, 6};
    int household[] = {86000, 86000, 86000, 86000, 86000, 86000};
    int food[] = {47000, 43000, 38600, 39500, 38600, 37500};
    int clothing[] = {3000, 30000, 5000, 0, 28000, 3000};
    int education[] = {20000, 15000, 65000, 12000, 7000, 5000};
    int medical[] = {9500, 0, 500, 0, 5200, 0};
    int others[] = {66000, 43000, 76000, 75000, 63500, 67000};
    int m, n;
    printf("各月の出費の合計\n------------------\n");
    for(int i = 0; i < 6; i++){
        setData(&expense[i], month[i], household[i], food[i], clothing[i], education[i], medical[i], others[i]);
        goukei(&expense[i]);
        printf("%d月 %d\n", expense[i].month, expense[i].total);
    }
    printf("\n");
    m = max_Medical(expense);
    n = max_Food(expense);
    printf("医療費の最も多い月：%d月\n", m);
    printf("食費の最も多い月と金額：%d月、%d\n", n, expense[n - 1].food);
    return 0;
}

void setData(kakei *expense, int month, int household, int food, int clothing, int education, int medical, int others){
    expense->month = month;
    expense->household = household;
    expense->food = food;
    expense->clothing = clothing;
    expense->education = education;
    expense->medical = medical;
    expense->others = others;
}
void goukei(kakei *expense){
    expense->total = expense->household + expense->food + expense->clothing + expense->education + expense->medical + expense->others;
}
int max_Medical(kakei *expense){
    int max = 0;
    int num;
    for(int i = 0; i < 6; i++){
        if((expense + i)->medical >= max){
            max = (expense + i)->medical;
            num = i + 1;
        }
    }
    return num;
}
int max_Food(kakei *expense){
    int max = 0;
    int num;
    for(int i = 0; i < 6; i++){
        if((expense + i)->food >= max){
            max = (expense + i)->food;
            num = i + 1;
        }
    }
    return num;
}