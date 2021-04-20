// 以下のプログラムで型に応じて複数定義されている関数maxを、テンプレートを用いて一つの関数にしなさい。
// main.cpp

#include <iostream>
#include <string>

using namespace std;

// //	整数値を比較し、大きいほうを返す関数
// int max(int,int);
// //	実数を比較し、大きいほうを返す関数
// double max(double,double);
// //	文字列を比較し、長いほうを返す関数
// string max(string,string);


template <typename T> T max(T a,T b)
{
	if(a > b){
		return a;
	}
	return b;
}

int main(){
    // :: is for avoiding std::max
	cout << ::max<int>(1,2) << endl;
	cout << ::max<double>(1.75,3.12) << endl;
	string s1 = "aiu",s2 = "eo";
	cout << ::max<string>(s1,s2) << endl;
	return 0;
}

    

// int max(int a,int b)
// {
// 	if(a > b){
// 		return a;
// 	}
// 	return b;
// }
// double max(double a,double b)
// {
// 	if(a > b){
// 		return a;
// 	}
// 	return b;
// }
// string max(string a,string b)
// {
// 	if(a > b){
// 		return a;
// 	}
// 	return b;
// }

