#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    int c;
    int name = 0, data_category = 0, data_string = 0;
    int max_name, score[16];
    char data[16][16][16];
    file = fopen("./probex7/score.txt", "r");
    if(file == NULL){
        printf("ファイルが開けません。\n");
        exit(1);
    }

    while((c = fgetc(file)) != EOF){
        if(c == 0x2c){
            data[name][data_category][data_string] = '\0';
            data_category = 1;
            data_string = 0;
        }else if(c == '\n'){
            data[name][data_category][data_string] = '\0';
            score[name] = atoi(data[name][data_category]);
            data_category = 0;
            data_string = 0;
            name++;
        }else if(c != 0x20){
            data[name][data_category][data_string] = (char)c;
            data_string++;
        }
    }
    data[name][data_category][data_string] = '\0';
    score[name] = atoi(data[name][data_category]);
    name++;

    printf("プレイヤー 得点\n");
    printf("--------------\n");
    for(int i = 0; i < name; i++){
        printf("%s %d点\n", data[i][0], score[i]);
    }
    printf("--------------\n");

    int i, max_score = 0;
    for(i = 0; i < name; i++){
        if(score[i] >= max_score){
            max_score = score[i]; 
        }
    }
    for(i = 0; i < name; i++){
        if(score[i] == max_score){
            printf("最高得点：%s(%d点)\n", data[i][0], score[i]);
        }
    }
}