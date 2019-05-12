
#include "VectorLengthException.h"
using namespace std;


class VectorLengthException : public exception {
 public:
	 const char * what() const throw(){
      return "Not a valid Vector length";
   }
};

VectorLengthException::VectorLengthException()
{
}


VectorLengthException::~VectorLengthException()
{
}
