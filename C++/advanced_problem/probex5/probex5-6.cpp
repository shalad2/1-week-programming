#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    stack<string> words;
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
        cout << words.top() << endl;
        words.pop();
    }
    return 0;
}