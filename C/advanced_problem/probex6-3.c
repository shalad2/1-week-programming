#include <stdio.h>

typedef struct{
    int hour;
    int minute;
    int second;
}Time;

void setTime(Time *, int, int, int);
int getDiffMinute(Time *, Time *);

int main(void){
    Time start, end;
    int diff;
    start.hour = 1;
    start.minute = 10;
    start.second = 13;
    setTime(&start, start.hour, start.minute, start.second);
    end.hour = 2;
    end.minute = 20;
    end.second = 42;
    setTime(&end, end.hour, end.minute, end.second);
    diff = getDiffMinute(&start, &end);
    printf("%d:%d:%dと、%d:%d:%dの違いは、%d秒です。\n"
        ,start.hour, start.minute, start.second, end.hour, end.minute, end.second, diff);
    return 0;    
}

void setTime(Time *time, int hour, int minute, int second){
    time->hour = hour;
    time->minute = minute;
    time->second = second;
}
int getDiffMinute(Time *start, Time *end){
    int start_total, end_total;
    start_total = start->hour * 3600 + start->minute * 60 + start->second;
    end_total = end->hour * 3600 + end->minute * 60 + end->second;
    return end_total - start_total;
}