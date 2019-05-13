#pragma once
#include "Point.h"
class Vector :
	public Point
{
	//double x, y, z;
	Point poi;
	double length;
public:
	Vector();
	Vector(double, double, double);
	Vector(Point&, Point&);

	Point getPoi()const;
	void setPoi(Point);


	void vLength();
	Vector * vDirection();
	Vector * vProj(Vector);
	bool nullVector();
	bool vPar(Vector);


	Vector  operator +(const Vector &);
	Vector  operator -(const Vector &);
	Vector  operator *(const Vector &);

	double getX()const;
	double getY()const;
	double getZ()const;
	void setX(double);
	void setY(double);
	void setZ(double);

	~Vector();
};

