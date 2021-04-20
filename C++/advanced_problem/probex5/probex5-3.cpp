#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <set>

using namespace std;

int main(){
    set<int> numbers;
    int n[10];
    srand((unsigned)time(NULL));
    for(int i = 0; i <10; i++){
        n[i] = rand() % 10 + 1;
        numbers.insert(n[i]);
    }
    cout << "乱数：";
    for(int i = 0; i < 10; i++){
        cout << n[i] << " ";
    }
    cout << endl;
    cout << "出現した数：";
    set<int>::iterator itr;
    for(itr = numbers.begin(); itr != numbers.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
}