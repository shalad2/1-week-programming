#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;
    int num;
    while(1){
        cout << "正の整数を入力：";
        cin >> num;
        if(num == -1){
            cout << endl;
            break;
        }else if(num <= 0){
            cout << "正の整数ではありません。" << endl;
        }else{
            l.push_back(num);
        }
    }
    l.remove(2);
    list<int>::iterator itr;
    for(itr = l.begin(); itr != l.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}