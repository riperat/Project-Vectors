#include "Vector.h"



Vector::Vector()
{
	length = 0;
}

Vector::Vector(double px, double py, double pz){
	poi.setX(px);
	poi.setY(py);
	poi.setZ(pz);
}


Vector::Vector(Point & A, Point & B){
	
	
	poi.setX(B.getX() - A.getX());
	poi.setY(B.getY() - A.getY());
	poi.setZ(B.getZ() - A.getZ());
}

Point Vector::getPoi() const
{
	return this->poi;
}

void Vector::setPoi(Point p1)
{
	this->poi = p1;
}

void Vector::vLength()
{
	length = pow(poi.getX(), 2) + pow(poi.getY(), 2) + pow(poi.getZ(), 2);
	length = sqrt(length);
	cout << length;
}

Vector * Vector::vDirection()
{
	//TODO ADD EXCEPTION HANDLING IF LENGTH IS 0 WITH V Length Exception class
	 
	double uX, uY, uZ;
	uX = poi.getX() / length;
	uY = poi.getY() / length;
	uZ = poi.getZ() / length;
	Vector unitV(uX,uY,uZ);
	return &unitV;
}

Vector * Vector::vProj(Vector v2)
{
	Vector proj;
	Point p = v2.getPoi();
	double a[3];
	double b[3];

	a[0] = this->poi.getX();
	a[1] = this->poi.getY();
	a[2] = this->poi.getZ();

	b[0] = p.getX();
	b[1] = p.getY();
	b[2] = p.getZ();

	double axb = (a[0] * b[0]) - (a[1] * b[1]) + (a[2] * b[2]);
	double lbl = pow(b[0], 2) + pow(b[1], 2) + pow(b[2], 2);

	axb /= lbl;

	proj = Vector(axb * b[0], axb * b[1], axb * b[2]);
	return &proj;
}

bool Vector::nullVector()
{
	if (this->poi.getX() + this->poi.getY() + this->poi.getZ() == 0)
	{
		return 1;
	}
	return 0;
}

bool Vector::vPar(Vector v2)
{
	//TODO add vle exception if one of the two vercors are = 0;
	VectorLengthException z;

	Point p = v2.getPoi();
	double a[3];
	double b[3];

	a[0] = this->poi.getX();
	a[1] = this->poi.getY();
	a[2] = this->poi.getZ();

	b[0] = p.getX();
	b[1] = p.getY();
	b[2] = p.getZ();

	double c = a[0] / b[0];
	if (b[0] * c == a[0] && b[1] * c == a[1] && b[2] * c == a[2])
	{
		return 1;
	}

	return false;
}


Vector::~Vector()
{
}
