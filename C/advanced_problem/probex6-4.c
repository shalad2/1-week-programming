#include <stdio.h>

typedef struct{
    int id;
    int kokugo;
    int sansu;
    int rika;
    int shakai;
    int eigo;
}student_data;

void setData(student_data *, int, int, int, int, int, int);
void showAverage(student_data *);

int main(void){
    student_data data[5];
    int id[] = {1001, 1002, 1003, 1004, 1005};
    int kokugo[] = {82, 92, 43, 72, 99};
    int sansu[] = {43, 83, 32, 73, 72};
    int rika[] = {53, 88, 53, 71, 82};
    int shakai[] = {84, 79, 45, 68, 91};
    int eigo[] = {45, 99, 66, 59, 94};
    for(int i = 0; i < 5; i++){
        setData(&data[i], id[i], kokugo[i], sansu[i], rika[i], shakai[i], eigo[i]);
    }
    showAverage(data);
    return 0;
}

void setData(student_data *data, int id, int kokugo, int sansu, int rika, int shakai, int eigo){
    data->id = id;
    data->kokugo = kokugo;
    data->sansu = sansu;
    data->rika = rika;
    data->shakai = shakai;
    data->eigo = eigo;
}
void showAverage(student_data *data){
    int sum_kokugo = 0;
    int sum_sansu = 0;
    int sum_rika = 0;
    int sum_shakai = 0;
    int sum_eigo = 0;
    for(int i = 0; i < 5; i++){
        sum_kokugo += data->kokugo;
        sum_sansu += data->sansu;
        sum_rika += data->rika;
        sum_shakai += data->shakai;
        sum_eigo += data->eigo;
        data++;
    }
    printf("国語 平均：%.2f\n", (float)sum_kokugo / 5);
    printf("算数 平均：%.2f\n", (float)sum_sansu / 5);
    printf("理科 平均：%.2f\n", (float)sum_rika / 5);
    printf("社会 平均：%.2f\n", (float)sum_shakai / 5);
    printf("英語 平均：%.2f\n", (float)sum_eigo / 5);
}