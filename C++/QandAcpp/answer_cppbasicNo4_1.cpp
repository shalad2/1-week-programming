// prob4-1.(難易度：★)
// 以下のプログラムに、指定した変更を加えなさい。
// 変更点は以下の通り
//     Numberクラスにコンストラクタをつけ、メンバ変数a,bを0で初期化する。
//     main.cpp内の最後で、pNのメモリを解放する。

// clang++ -c number.cpp 
// clang++ number.o answer_cppbasicNo4_1.cpp 



#include <iostream>
#include "number.h"

using namespace std;

int main(){
	Number* pN;
	pN = new Number();
    //check
    cout<< pN->a <<" "<<pN->b <<endl;

	pN->setNumbers(1, 2);
	cout << pN->getAdd() << endl;
    delete pN;
	return 0;
}
