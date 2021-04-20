#include <iostream>
#include "airplane.h"
#include "fighteraircraft.h"
#include "passengerplane.h"

using namespace std;

int main(){
    AirPlane *p1, *p2;
    FighterAircraft fighter;
    PassengerPlane airlinear;
    p1 = new FighterAircraft();
    p2 = new PassengerPlane();
    p1->fly();
    fighter.fight();
    p2->fly();
    airlinear.carryPassengers();
    delete p1;
    delete p2;
}