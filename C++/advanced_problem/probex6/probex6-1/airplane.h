#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <iostream>
#include <string>

using namespace std;

class AirPlane{
protected:
    string m_type;
public:
    AirPlane();
    virtual ~AirPlane();
    string getType();
    virtual void fly() = 0;
};

#endif // _AIRPLANE_H_