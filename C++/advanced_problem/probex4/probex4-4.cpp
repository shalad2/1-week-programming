#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> s;
    string tmp;
    while(1){
        cout << "文字列を入力：";
        getline(cin, tmp);
        if(tmp.empty() == 1){
            cout << endl;
            break;
        }else{
            s.push_back(tmp);
        }
    }
    int max_length = s[0].length();
    int min_length = s[0].length();
    for(int i = 1; i < s.size(); i++){
        if(s[i].length() >= max_length){
            max_length = s[i].length();
        }
        if(s[i].length() <= min_length){
            min_length = s[i].length();
        }
    }
    cout << "最長の単語：";
    for(int i = 0; i < s.size(); i++){
        if(s[i].length() == max_length){
            cout << s[i] << " ";
        }
    }
    cout << endl;
    cout << "最短の単語：";
    for(int i = 0; i < s.size(); i++){
        if(s[i].length() == min_length){
            cout << s[i] << " ";
        }
    }
    cout << endl;
    return 0;
}