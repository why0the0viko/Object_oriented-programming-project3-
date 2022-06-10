#ifndef _BASKET_
#define _BASKET_

#include "carrot.hpp"
#include "ground.hpp"
#include <vector>


class basket
{
    private:
    int capacity;
    std :: vector<carrot *> bas;
    public:
    //setters
    void setterCapacity(int);
    void setterVector(std :: vector<carrot *>);
    //getter
    int getterCapacity();
    std :: vector<carrot *>getterVecBasket();
    //constructor
    basket(int);
    basket();
    //destructor
    ~basket();
    //methods
    void addFruit(carrot *);
    void emptyBasket();
    void printBasket();

};
#endif
