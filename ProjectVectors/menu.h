#ifndef _MENU_H_
#define _MENU_H_
#include <iostream>
#include "Segment.h"
#include "Triangle.h"

using namespace std;
class menu
{
	void start();
	void handler(int);
public:
	menu();
	void engine();
	
	~menu();
};

#endif