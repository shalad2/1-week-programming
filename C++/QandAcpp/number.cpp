#include <iostream>
#include "number.h"



//	コンストラクタ
Number::Number() : a(0), b(0)
{
}
//	デストラクタ
Number::~Number()
{
    // std::cout << "Numberオブジェクト破棄" << std::endl;
}
//	二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
	a = n1;
	b = n2;
}
int Number::getAdd()
{
	return a + b;
}
