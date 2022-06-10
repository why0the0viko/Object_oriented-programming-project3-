#ifndef _GROUND_
#define _GROUND_
#include "carrot.hpp"
#include <vector>

class ground
{
    private:

    int average_growth;
    std :: vector<carrot *> amount;

    public:
    //setters
    void setterAverageGrowth(int);
    void settterVectorCarrot(std :: vector<carrot *>);
    //getter
    int getterAverageGrowth();
    std :: vector<carrot *> getterVectorCarrot();
    //constructor
    ground();
    ground(int);
    ground(int, std :: vector<carrot *>);
    //methods
    void grow_veg();
    carrot *remove_veg();
    void print_veg();
    void its_harvesting_time();
    void newBatch();
    //destructor
    ~ground();


};
#endif