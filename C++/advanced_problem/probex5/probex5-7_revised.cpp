#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> word;
    char tmp[256];
    cout << "英単語を入力：";
    cin >> tmp;
    
    /*strlen関数は呼ばれていない？

    int l = strlen(tmp);
    for(int i = 0; i < l; i++){
        word.push(tmp[i]);
    }*/

    int i = 0;
    while(tmp[i] != '\0'){
        word.push(tmp[i]);
        i++;
    }
    
    cout << endl;
    while(!word.empty()){
        cout << word.top();
        word.pop();
    }
    cout << endl;
    return 0;
}