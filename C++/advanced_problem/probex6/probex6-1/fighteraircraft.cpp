#include <iostream>
#include <string>
#include "fighteraircraft.h"

using namespace std;

FighterAircraft::FighterAircraft(){
    m_type = "戦闘機";
}
FighterAircraft::~FighterAircraft(){

}
void FighterAircraft::fly(){
    cout << "攻撃に出るために飛行" << endl;
}
void FighterAircraft::fight(){
    cout << "戦闘します" << endl;
}