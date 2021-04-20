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
    cout << "最大値：";
    int max = v[0];
    for(int i = 1; i < v.size(); i++){
        if(v[i] >= max){
            max = v[i];
        }
    }
    cout << max << endl;

    cout << "最小値：";
    int min = v[0];
    for(int i = 1; i < v.size(); i++){
        if(v[i] <= min){
            min = v[i];
        }
    }
    cout << min << endl;
    return 0;
}