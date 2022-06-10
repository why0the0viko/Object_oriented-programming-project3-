#include "carrot.hpp"
#include "ground.hpp"
#include <vector>
#include "basket.hpp"
#include <iostream>
#include "picker.hpp"
#include "ground.hpp"

//setter
void picker :: setterFruit_amount(int am)
{
    fruit_amount = am;
}
void picker :: setterMoney(float money_MRcrab)
{
    money = money_MRcrab;
}
//getters
int picker :: getterFruit_amount()
{
    return fruit_amount;
}
float picker :: getter_money()
{
    return money;
}
//constructor 
picker :: picker(int am)
{
    setterFruit_amount(am);
}
//destructor
picker :: ~picker()
{
    //std :: cout << "picker class was destroyed " << std :: endl;
}
//methods
void picker :: collectFruit(ground &grn)
{
    fill.addFruit(grn.remove_veg());
}
int picker :: check(ground &grn)
{
    int i = 0;
    int pickerMax = 0;
    while(pickerMax < fruit_amount)
    {
        if(pickerMax > grn.getterAverageGrowth())
        {
            fullWallet(pickerMax);
            return pickerMax;

        }
        if(i < fill.getterCapacity())
        {
            collectFruit(grn);
            ++i;
            ++pickerMax;
            //std:: cout << pickerMax << std :: endl;
        }
        else if(i == fill.getterCapacity())
        {
            fill.emptyBasket();
            i = 0;

        }
    }
    fill.emptyBasket();
    fullWallet(pickerMax);
    return pickerMax;
}
void picker :: fullWallet(int counter)
{
    money += (counter * carrot :: price);
}