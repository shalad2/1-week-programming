#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s,t;
    s = "を2倍した数は、";
    t = "です。";
    cout << "数値を入力してください：";
    cin >> n;
    cout << n << s << 2 * n << t << endl;
    return 0;
}