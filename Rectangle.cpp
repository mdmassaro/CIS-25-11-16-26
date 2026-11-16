#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) : TwoDShape(width, height){};

double Rectangle::getArea(){ return this->width * this->height; }