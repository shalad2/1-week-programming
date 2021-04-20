#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int n;
    while(1){
        cout << "正の整数を入力：";
        cin >> n;
        if(n == -1){
            cout << endl;
            break;
        }else if(n <= 0){
            cout << "正の整数ではありません。" <<endl;
        }else{
            v.push_back(n);
        }
    }
    int count = 0;
    for(int i = 0; i < 10; i ++){
        cout << "一の位が" << i << "：";
        for(int j = 0; j < v.size(); j++){
            if(v[j] % 10 == i){
                cout << v[j] << " ";
                count++;
            }
        }
        if(count == 0){
            cout << "なし";
        }
        count = 0;
        cout << endl;
    }
    return 0;
}