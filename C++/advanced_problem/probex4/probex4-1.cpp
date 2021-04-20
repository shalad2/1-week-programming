#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    int n;
    while(1){
        cout << "正の整数を入力：";
        cin >> n;
        if(n == -1){
            cout << endl;
            break;
        }else if(n <= 0){
            cout << "正の整数ではありません。" <<endl;
        }
        else if(n % 2 == 0){
            v1.push_back(n);
        }else{
            v2.push_back(n);
        }
    }
    cout << "偶数：";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "奇数：";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}