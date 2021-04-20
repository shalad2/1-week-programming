#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<char> number;
    char tmp[32];
    char sample[] = {"0123456789"};
    cout << "整数の値を入力してください：";
    cin >> tmp;
    int a = 0, b = strlen(tmp);
    for(int i = 0; i < b; i++){
        for(int j = 0; j < 10; j++){
            if(tmp[i] == sample[j]){
                a++;
            }
        }
    }
    cout << endl;
    if(a == b){
        for(int i = 0; i < b; i++){
            number.push(tmp[i]);
        }
        cout << "変換結果：";
        int count = 0;
        while(!number.empty()){
            if(number.front() == sample[0]){
                cout << "○";
            }else if(number.front() == sample[1]){
                cout << "一";
            }else if(number.front() == sample[2]){
                cout << "二";
            }else if(number.front() == sample[3]){
                cout << "三";
            }else if(number.front() == sample[4]){
                cout << "四";
            }else if(number.front() == sample[5]){
                cout << "五";
            }else if(number.front() == sample[6]){
                cout << "六";
            }else if(number.front() == sample[7]){
                cout << "七";
            }else if(number.front() == sample[8]){
                cout << "八";
            }else if(number.front() == sample[9]){
                cout << "九";
            }
            if((count + 1) % 3 == b % 3 && (count + 1) != b){
                cout << ",";
            }
            count++;
            number.pop();
        }
    }else{
        cout << "整数の値を入力してください。";
    }
    cout << endl;
    return 0;
}