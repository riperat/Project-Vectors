#pragma once
#include <iostream>
#include <exception>
#include <string>
class VectorLengthException :
	public logic_error
{
public:
	VectorLengthException();
	~VectorLengthException();
};

