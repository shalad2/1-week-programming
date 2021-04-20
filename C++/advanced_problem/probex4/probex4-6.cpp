#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;
    list<int>::iterator itr;
    itr = l.begin();
    int num;
    while(1){
        cout << "正の整数を入力：";
        cin >> num;
        if(num == -1){
            cout << endl;
            break;
        }else if(num <= 0){
            cout << endl;
            cout << "正の整数ではありません。" << endl;
        }else{
            while(itr != l.end()){
                if(num < *itr){
                    break;
                }
                itr++;
            }
            l.insert(itr, num);
            cout << endl;
        }
        cout << "入力された数：";
        for(itr = l.begin(); itr != l.end(); itr++){
            cout << *itr << " ";
        }
        cout << endl << endl;
        itr = l.begin();
    }
    return 0;
}