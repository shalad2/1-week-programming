#include <stdio.h>

typedef struct{
    int id;
    int kokugo;
    int sansu;
    int rika;
    int shakai;
    int eigo;
    int sum;
}student_data;

void setData(student_data *, int, int, int, int, int, int);
void changeData(student_data *);

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
    changeData(data);
    printf(" 番号　国語　数学　理科　社会　英語　合計\n");
    for(int i = 0; i < 5; i++){
        printf("%5d %5d %5d %5d %5d %5d %5d\n"
            , data[i].id, data[i].kokugo, data[i].sansu, data[i].rika, data[i].shakai
            , data[i].eigo, data[i].sum);
    }
    return 0;
}

void setData(student_data *data, int id, int kokugo, int sansu, int rika, int shakai, int eigo){
    data->id = id;
    data->kokugo = kokugo;
    data->sansu = sansu;
    data->rika = rika;
    data->shakai = shakai;
    data->eigo = eigo;
    data->sum = kokugo + sansu + rika +shakai + eigo;
}
void changeData(student_data *data){
    int x = 0;
    int max = 0;
    student_data temp;
    for(int i = 0; i < 5; i++){
        for(int j = x; j < 5; j++){
            if((data + j)->sum >= max){
                max = (data + j)->sum;
                temp = data[x];
                data[x] = data[j];
                data[j] = temp;
            }
        }
        x++;
        max = 0;
    }
}