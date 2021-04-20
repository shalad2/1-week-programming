// prob3-1.(難易度：★)
// 以下のプログラムのクラスCDataに、メンバ変数のセッターおよびゲッターを追加し、ビルドが通るようにし、期待される実行結果を得られるように書き換えなさい。

// g++ -c data.cpp
// g++ answer_cppbasicNo3_1.cpp  data.o


#include <iostream>
#include "data.h"

using namespace std;

int main(){
	CData d;
	d.init();	//	パラメータを初期化
	d.setNumber(100);
	d.setComment("Programming C++");
	cout << "number = " << d.getNumber() << " comment = " << d.getComment() << endl;
	return 0;
}
