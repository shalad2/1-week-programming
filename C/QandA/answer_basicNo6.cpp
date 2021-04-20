#include <iostream>
#include <fstream>
#include <float.h>
#include <assert.h>
#include <string.h>

#include <string>

#include <stdlib.h>     // standard C library function
#include<time.h>

// prob7-1
#include "calculation.h"

// prob7-4
#include "showResult.h"


int main(){

        // //prob7-1
   // //   g++ -c calculation.c 
    // //  g++ answers.cpp calculation.o


	// int n1,n2;
	// int r1,r2;
	// printf("n1=");
	// scanf("%d",&n1);
	// printf("n2=");
	// scanf("%d",&n2);
	// r1 = idiv(n1,n2);	//	入力した2つの整数値の商を求める
	// r2 = mod(n1,n2);	//	入力した2つの整数値の割り算の余りを求める
	// printf("%d / %d = %d 余り %d¥n",n1,n2,r1,r2);


    // Prob7-4
    // g++ -c calculation.c
    // g++ -c  showResult.c
    // g++  calculation.o showResult.o answer.cpp

    init(100);
	showNum();
	add(10);	//	10加算
	showNum();
	sub(100);	//	100減算
	showNum();
}
