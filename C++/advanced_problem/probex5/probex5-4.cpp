#include <iostream>
#include <set>

using namespace std;

int main(){
    set<char> word;
    char tmp[256];
    cout << "英単語を入力：";
    cin >> tmp;
    int l = strlen(tmp);
    for(int i = 0; i < l; i++){
        word.insert(tmp[i]);
    }
    cout << "使用されているアルファベット：";
    set<char>::iterator itr;
    for(itr = word.begin(); itr != word.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}