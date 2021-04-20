#include "fielder.h"

Fielder::Fielder(string name, int number){
    m_name = name;
    m_number = number;
    m_kind = "フィールダー";
}
void Fielder::play(){
    cout << "守備をする" << endl;
}