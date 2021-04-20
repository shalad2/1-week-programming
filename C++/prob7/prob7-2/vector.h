#ifndef _COUNTER_H_
#define _COUNTER_H_

class Vector{
    private:
    double m_x;
    double m_y;
    public:
    Vector();
    Vector(double x, double y);
    void set(double x, double y);
    double getX();
    double getY();
};

#endif // _VECTOR_H_