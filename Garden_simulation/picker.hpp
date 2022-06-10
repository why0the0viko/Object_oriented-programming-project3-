#ifndef _PICKER_
#define _PICKER_

#include "carrot.hpp"
#include "ground.hpp"
#include <vector>
#include "basket.hpp"

class picker
{
    private:
    int fruit_amount;
    basket fill;
    float money = 0;
    public:
    //setter
    void setterFruit_amount(int);
    void setterMoney(float);
    //getters
    int getterFruit_amount();
    float getter_money();
    //constructor
    picker(int);
    //destructor
    ~picker();
    //methods
    void collectFruit(ground &);
    int check(ground &);
    void fullWallet(int );

};

#endif