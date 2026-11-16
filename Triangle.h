#include "TwoDShape.h"

class Triangle: public TwoDShape{
    private:

    public:
        Triangle(double width, double height);
        double getArea() override;
};