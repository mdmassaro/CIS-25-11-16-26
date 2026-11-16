#ifndef PIG_H
#define PIG_H
#include <iostream>
#include "Animal.h"
using namespace std;

class Pig: public Animal{
    private:

    public:
        void makeNoise() override;
};
#endif