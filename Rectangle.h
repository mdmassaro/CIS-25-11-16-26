#include "TwoDShape.h"

class Rectangle: public TwoDShape{
    private:

    public:
        Rectangle(double width, double height);
        double getArea() override;
};