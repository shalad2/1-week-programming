#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

AirPlane::AirPlane(): m_type(""){

}
AirPlane::~AirPlane(){

}
string AirPlane::getType(){
    return m_type;
}