#include "calculation.h"

int idiv(int a,int b){
	return a / b;
}

int mod(int a,int b){
	return a % b;
}


// Prob 7-4
int ans;

//	初期値の設定
void init(int num)
{
	ans = num;	//	値の初期化
}
//	加算
void add(int num)
{
	ans += num;	//	現在の値に足し算
}
//	減算
void sub(int num)
{
	ans -= num;	//	現在の値から引き算
}
