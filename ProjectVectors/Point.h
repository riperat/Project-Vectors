#ifndef _POINT_H_
#define _POINT_H_
#include "Element.h"

class Point : public Element
{
	double x, y, z;
public:
	//c
	Point();
	Point(double, double, double);

	//cc
	Point(const Point &);

	//cao
	Point& operator=(const Point&);

	//destr
	~Point();

	bool operator == (const Point&);

	//set get
	double getX()const;
	double getY()const;
	double getZ()const;
	void setX(double);
	void setY(double);
	void setZ(double);


	
};

#endif