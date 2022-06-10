#include "carrot.hpp"
#include "ground.hpp"
#include <vector>
#include "basket.hpp"
#include <iostream>

//setters
void basket :: setterCapacity(int cap)
{
    capacity = cap;
}
void basket :: setterVector(std :: vector<carrot *> vec)
{
    bas = vec;
}
//getter
int basket :: getterCapacity()
{
    return capacity;
}
std :: vector<carrot *> basket :: getterVecBasket()
{
    return bas;
}
//constructor
basket :: basket(int cap)
{
    setterCapacity(cap);
}
basket :: basket()
{
    setterCapacity(15);
}
//destructor
basket :: ~basket()
{
    std :: cout << "The class basket was destroyed " << std :: endl;
}
//methods
void basket :: addFruit(carrot * veg)
{
    bas.push_back(veg);
}
void basket :: emptyBasket()
{
    std :: vector<carrot *> :: iterator it;
    while(!bas.empty()) {
        delete bas.back();
        bas.pop_back();
    }
}
void basket :: printBasket()
{
    if(bas.size() > 0)
    {
        for(int i = 0; i < bas.size(); ++i)
        {
            std :: cout << "mass:" << bas[i]->getterMass() << std :: endl;
            std :: cout << "Lenght:" << bas[i]->getterLenght() << std :: endl;
            std :: cout << "Color:" << bas[i]->getterColor() << std :: endl;
            std :: cout << "BAby ? :" << bas[i]->getterBaby() << std :: endl;
            std :: cout << std :: endl;
        }
    }
    
}