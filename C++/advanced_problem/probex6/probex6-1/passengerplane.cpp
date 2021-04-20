#include <iostream>
#include <string>
#include "passengerplane.h"

using namespace std;

PassengerPlane::PassengerPlane(){
    m_type = "旅客機";
}
PassengerPlane::~PassengerPlane(){

}
void PassengerPlane::fly(){
    cout << "乗客を乗せて目的地まで飛行します" << endl;
}
void PassengerPlane::carryPassengers(){
    cout << "乗客を目的地まで運びます" <<endl;
}