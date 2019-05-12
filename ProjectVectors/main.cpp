#include <iostream>
#include "menu.h"
#include "Segment.h"

using namespace std;

int main() {

	Vector a(-3,-2,5);
	Vector b(6, 4, -10);
	a.vLength();
	a.vDirection();
	a.vProj(a);
	a.vPar(b);
/*
	menu m;
	m.engine();*/
	system("pause");
}