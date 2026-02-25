#pragma once
#include <math.h>
class Triangle
{
private: 
    double x, y, z;
public:
    Triangle();
    Triangle(double x, double y, double z);
    Triangle(const Triangle& other_triangle);

     double Get_X();
     double Get_Y();
     double Get_Z();

     void Set_X(Triangle t);
     void Set_Y(Triangle t);
     void Set_Z(Triangle t);


     double Perimeter();
     double Square();


     Triangle operator*(double k) const; 
     Triangle operator+(const Triangle &t);




     ~Triangle();
};
    



