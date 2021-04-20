#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<char, string> numbers;
    char num[] = {"0123456789"};
    char tmp[32];
    numbers[num[0]] = "○";
    numbers[num[1]] = "一";
    numbers[num[2]] = "二";
    numbers[num[3]] = "三";
    numbers[num[4]] = "四";
    numbers[num[5]] = "五";
    numbers[num[6]] = "六";
    numbers[num[7]] = "七";
    numbers[num[8]] = "八";
    numbers[num[9]] = "九";
    cout << "整数の値を入力してください：";
    cin >> tmp;
    int a;
    int b = strlen(tmp);
    for(int i = 0; i < b; i++){
        for(int j = 0; j < 10; j++){
            if(tmp[i] == num[j]){
                a++;
            }
        }
    }
    cout << endl;
    if(a == b){
        cout << "変換結果：";
        for(int i = 0; i < b; i++){
            for(int j = 0; j < 10; j++){
                if(tmp[i] == num[j]){
                    cout << numbers[num[j]];
                }
            }
            if((i + 1) % 3 == b % 3 && (i + 1) != b){
                cout << ",";
            }
        }
    }else{
        cout << "整数の値を入力してください。";
    }
    cout << endl;
    return 0;
}