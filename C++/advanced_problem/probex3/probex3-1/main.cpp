#include <iostream>
#include <string>

using namespace std;

template <typename T>
T Max(T a, T b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout << Max(1, 2) << endl;
    cout << Max<double>(1.75, 3.12) << endl;
    string s1 = "aiu", s2 = "eo";
    int max_length, s1_length, s2_length;
    s1_length = s1.length();
    s2_length = s2.length();
    max_length = Max(s1_length, s2_length);
    if(max_length == s1_length){
        cout << s1 << endl;
    }else{
        cout << s2 <<endl;
    }
    return 0;
}