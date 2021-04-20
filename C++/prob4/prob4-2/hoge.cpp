#include <iostream>
#include "hoge.h"

using namespace std;

Hoge::Hoge(){
    cout << "コンストラクタ" << endl;
}
Hoge::~Hoge(){
    cout << "デストラクタ" << endl;
}
void Hoge::foo(){
    cout << "fooメゾット" <<endl;
}