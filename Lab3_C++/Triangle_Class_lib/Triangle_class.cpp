#include "pch.h"
#include "Triangle_class.h"
#include "math.h"

Triangle::Triangle()
{
	x = 0; y = 0; z = 0;
}

Triangle::Triangle(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Triangle::Triangle(const Triangle& other_triangle)
{
	x = other_triangle.x;
	y = other_triangle.y; 
	z = other_triangle.z;
}

double Triangle::Get_X(){return x;}
double Triangle::Get_Y(){return y;}
double Triangle::Get_Z(){return z;}

void Triangle::Set_X(Triangle t) { Triangle::x = x;}
void Triangle::Set_Y(Triangle t) { Triangle::y = y; }
void Triangle::Set_Z(Triangle t) { Triangle::z = z; }

double Triangle::Perimeter() {return x + y + z;}
double Triangle::Square()
{
	double p = Perimeter() / 2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}


Triangle Triangle::operator*(double k) const
{
	return Triangle(x * k, y * k, z * k);
}

Triangle Triangle::operator+(const Triangle& t)
{
	return Triangle(x + t.x, y + t.y, z + t.z);
}

Triangle::~Triangle()
{
	Triangle;
}