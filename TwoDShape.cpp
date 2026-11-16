#include "TwoDShape.h"

TwoDShape::TwoDShape(double width, double height) : width(width), height(height){}

double TwoDShape::getWidth(){ return this->width; }

double TwoDShape::getHeight(){ return this->height; }
