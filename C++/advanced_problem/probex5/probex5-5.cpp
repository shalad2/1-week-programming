#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    queue<string> words;
    string tmp;
    while(1){
        cout << "文字列を入力：";
        getline(cin, tmp);
        if(tmp.empty() == 1){
            cout << endl;
            break;
        }else{
            words.push(tmp);
        }
        tmp = "";
    }
    while(!words.empty()){
        cout << words.front() << endl;
        words.pop();
    }
    return 0;
}