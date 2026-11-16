#include "Triangle.h"

 Triangle::Triangle(double width, double height) : TwoDShape(width, height){};

 double Triangle::getArea(){ return this->width * this->height * 0.5; }