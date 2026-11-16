#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.h"
using namespace std;

class Cat: public Animal{
    private:

    public:
        void makeNoise() override;
};
#endif