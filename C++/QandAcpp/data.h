#ifndef DATA_H
#define DATA_H


#include <iostream>
#include <string>

using namespace std;

class CData{
private:
	//	メンバ変数number
	int number;
	//	メンバ変数comment
	string comment;
public:
	//	初期化
	void init();
	void setNumber(int num0);
	void setComment(string comment0);
    int getNumber();
    string getComment();
};

#endif // _CDATA_H_
