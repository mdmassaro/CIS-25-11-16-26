#ifndef TWODSHAPE_H
#define TWODSHAPE_H
#include <iostream>
using namespace std;

// any class with a pure virtual funciton will be an abstract class

class TwoDShape {
    private:

    protected:
        double width;
        double height;

    public:
        TwoDShape(double width, double height);
        virtual ~TwoDShape();
        double getWidth();
        double getHeight();
        virtual double getArea() = 0; // pure virtual function
};
#endif