#include "carrot.hpp"
#include "ground.hpp"
#include <vector>
#include <iostream>
#include <time.h>

//setters
void ground :: setterAverageGrowth(int size)
{
    average_growth = size;
}
void ground :: settterVectorCarrot(std :: vector<carrot *> vec)
{
    amount = vec;
}
//getter
int ground :: getterAverageGrowth()
{
    return average_growth;
}
std :: vector<carrot *> ground :: getterVectorCarrot()
{
    return amount;
}
//constructor
ground :: ground()
{
    setterAverageGrowth(40);
}
ground :: ground(int s)
{
    setterAverageGrowth(s);
}
ground :: ground(int s, std :: vector<carrot *> vec)
{
    setterAverageGrowth(s);
    settterVectorCarrot(vec);
}
//destructor
ground :: ~ground()
{
    for(int i = 0; i < average_growth; ++i)
    {
        remove_veg();
    }
    std :: cout << " The ground class was destructed" << std :: endl;
}
//methods
void ground :: grow_veg()
{
    int ind, l, m;
    ind = rand() % 4;
    //std :: cout << ind << std :: endl;
    switch(ind)
    {
        case 0: 
        {
            l = 10 + rand() % 7;
            m = 65 + rand() % 16;
            carrot *obj = new carrot(m, l, "purple", false);
            amount.push_back(obj);
            break;
        }
        case 1:
        {
            l = 3 + rand() % 3;
            m = 4 + rand() % 7;
            carrot *obj = new carrot(m, l, "orange", true);
            amount.push_back(obj);
            break;
        }
        case 2:
        {
            l = 10 + rand() % 7;
            m = 65 + rand() % 16;
            carrot *obj = new carrot(m, l, "white", false);
            amount.push_back(obj);
            break;
        }
        case 3:
        {
            l = 3 + rand() % 3;
            m = 4 + rand() % 7;
            carrot *obj = new carrot(m, l, "yellow", true);
            amount.push_back(obj);
            break;
        }

    }
}
carrot *ground :: remove_veg()
{
    carrot *temp;
    // std :: vector<carrot *> :: iterator it;
    // it = amount.begin();
    temp = amount.back();
    amount.pop_back();
    //delete amount.back();
    return temp;
}
void ground :: print_veg()
{
    //std :: vector<carrot *> :: iterator it;
    for(int i = 0; i < amount.size(); ++i)
    {
        std :: cout << "mass:" << amount[i]->getterMass() << std :: endl;
        std :: cout << "Lenght:" << amount[i]->getterLenght() << std :: endl;
        std :: cout << "Color:" << amount[i]->getterColor() << std :: endl;
        std :: cout << "BAby ? :" << amount[i]->getterBaby() << std :: endl;
        std :: cout << std :: endl;
    }
    
}
void ground :: its_harvesting_time()
{
    for(int i = 0; i < average_growth; ++i)
    {
        grow_veg();
    }
}
void ground :: newBatch()
{
    while(!amount.empty()) {
        delete amount.back();
        amount.pop_back();
    }
}