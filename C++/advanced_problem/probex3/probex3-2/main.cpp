#include <iostream>
#include "collection.h"

using namespace std;

int main(){
    double array1[] = {1.2, 3.5, 8.1, 4.9, 2.0, 2.2};
    int array2[] = {1, 5, 4, 2, 3};
    collection<double> *c1 = new collection<double>(array1, 6);
    collection<int> *c2 = new collection<int>(array2, 5);
    cout << "実数の場合" << endl;
    c1->showArray();
    cout << "最大値：" << c1->getMax() << endl;
    cout << "最小値：" << c1->getMin() << endl;
    cout << endl << "整数の場合" <<endl;
    c2->showArray();
    cout << "最大値：" << c2->getMax() << endl;
    cout << "最小値：" << c2->getMin() << endl;
    delete c1;
    delete c2;
    return 0;
}