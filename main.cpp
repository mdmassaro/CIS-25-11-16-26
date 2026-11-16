#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Pig.h"
#include "TwoDShape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

/*
void makeTheAnimalMakeNoise(Animal * animal){
    animal->makeNoise();
}
*/

void printArea(TwoDShape * shape){
    cout << "The area of the shape is " << shape->getArea() << endl;
}

int main(){
    /*
    Animal myAnimal;
    Pig myPig;
    Chicken myChicken;

    makeTheAnimalMakeNoise(&myAnimal);
    makeTheAnimalMakeNoise(&myPig);
    makeTheAnimalMakeNoise(&myChicken);
    */

 //   TwoDShape myShape(5,10);
    Triangle myTriangle(5,10);
    Rectangle myRectangle(5,10);

    printArea(&myTriangle);
    printArea(&myRectangle);

    return 0;
}