#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <vector>
#include "carrot.hpp"
#include "ground.hpp"
#include "basket.hpp"
#include "picker.hpp"
float carrot :: price = 0.15;
int main()
{
    srand(time(NULL));
    int harvest = 0, harvest2 = 0, harvest3 = 0;
    //the ground patches
    ground patch1;
    ground patch2(17);
    ground patch3(26);
    //humans
    picker human1(13);
    picker human2(12);
    picker human3(20);
    //its harvest time
    for(int i = 0; i < 3; ++i)
    {
        patch1.its_harvesting_time();
        patch2.its_harvesting_time();
        patch3.its_harvesting_time();
        harvest += human1.check(patch1);
        harvest2 += human2.check(patch2);
        harvest3 += human3.check(patch3);
        std :: cout << "The picker 1 on salary of " << i + 1 << " day " << human1.getter_money() << std :: endl;
        std :: cout << "The picker 2 on salary of " << i + 1 << " day "  << human2.getter_money() << std :: endl;
        std :: cout << "The picker 3 on salary of " << i + 1 << " day "  << human3.getter_money() << std :: endl;
        std :: cout << "The harvest "<< i + 1 << " days : " << harvest + harvest2 + harvest3 << " carrots " << std :: endl;
        std :: cout << std :: endl;
        patch1.newBatch();
        patch2.newBatch();
        patch3.newBatch();
    }
    std :: cout << "The harvest of 3 days : " << harvest + harvest2 + harvest3 << " carrots " << std :: endl;
    
    // carrot * obj1 = new carrot();
    // carrot * obj2 = new carrot(15);
    // basket mhh;
    // mhh.addFruit(obj1);
    // mhh.addFruit(obj2);
    // mhh.emptyBasket();
    // mhh.addFruit(obj1);
    // //delete obj1;
    // //delete obj2;

    return 0;
}