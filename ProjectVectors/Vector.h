#pragma once
#include "Point.h"
class Vector :
	public Point
{
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


	~Vector();
};

