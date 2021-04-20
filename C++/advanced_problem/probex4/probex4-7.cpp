#include <iostream>
#include <string>
#include <list>

using namespace std;

bool Judge(string tmp){
    return tmp.length() >= 5;
}

int main(){
    list<string> l;
    string str;
    while(1){
        cout << "文字列を入力：";
        getline(cin, str);
        if(str.empty() == 1){
            cout << endl;
            break;
        }else{
            l.push_back(str);
        }
    }
    list<string>::iterator itr;
    l.remove_if(Judge);
    cout << "5文字未満の単語：";
    for(itr = l.begin(); itr != l.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}