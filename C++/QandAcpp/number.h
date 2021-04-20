#ifndef NUMBER_H
#define NUMBER_H


class Number{
private:
	// //	メンバ変数 
	// int a;
	// int b;
public:
	//	メンバ変数 for intial value check
	int a;
	int b;
	//	コンストラクタ
    Number();
	//	デストラクタ
    ~Number();
	//	二つの数値を設定
	void setNumbers(int n1, int n2);
	//	二つの数の和を取得
	int getAdd();
};

#endif // _NUMBER_H_
