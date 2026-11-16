#ifndef CHICKEN_H
#define CHICKEN_H
#include <iostream>
#include "Animal.h"
using namespace std;

class Chicken: public Animal{
    private:

    public:
        void makeNoise() override;
};
#endif