#include <iostream>
#include "keisan.h"

using namespace std;

// g++ -c keisan.cpp
// g++ keisan.o answer_cppbasicNo2_1.cpp &&./a.out


int main(){
	Keisan k;
	k.a = 4;
	k.b = 3;
	cout << k.a << " + " << k.b << " = " << k.add() << endl;
	cout << k.a << " - " << k.b << " = " << k.sub() << endl;
	return 0;


}


