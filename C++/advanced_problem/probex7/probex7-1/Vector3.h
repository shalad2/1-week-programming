#ifndef _VECTOR3_H_
#define _VECTOR3_H_

#include <iostream>
#include <string>

using namespace std;

class Vector3{
public:
    double x;
    double y;
    double z;
public:
    Vector3& operator=(const Vector3& v);
    Vector3& operator+=(const Vector3& v);
    Vector3& operator-=(const Vector3& v);
};

Vector3 operator+(const Vector3&, const Vector3&);
Vector3 operator-(const Vector3&, const Vector3&);
Vector3 operator*(const double, const Vector3& v);

#endif // _VECTOR3_H_