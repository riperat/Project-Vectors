#include "Point.h"



Point::Point()
{
	x,y,z = 0;

}

Point::Point(double xq, double yq , double zq): x(xq),y(yq),z(zq){}

Point::Point(const Point & p2)
{
	x = p2.x; y = p2.y; z = p2.z;
}

Point & Point::operator=(const Point & other)
{
	if (&other != this) {
		x = other.x;
		y = other.y;
		z = other.z;
	}
	return *this;
}

bool Point::operator == (const Point& po)
{
	
	if (this->x + this->y + this->z == po.x + po.y + po.z) {
		return 1;
	}
	return 0;
}

double Point::getX()const
{
	return this->x;
}

double Point::getY()const
{
	return this->y;
}

double Point::getZ()const
{
	return this->z;
}

void Point::setX(double vx) 
{
	this->x = vx;
}

void Point::setY(double vy)
{
	this->y = vy;

}

void Point::setZ(double vz)
{
	this->z = vz;
}




Point::~Point()
{
}
