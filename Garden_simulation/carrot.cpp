#include "carrot.hpp"
#include <string>
#include <iostream>
//setters
void carrot :: setterMass(int carrot_mass)
{
    mass = carrot_mass;
}
void carrot :: setterLenght(int carrot_lenght)
{
    lenght = carrot_lenght;
}
void carrot :: setterColor(std :: string carrot_color)
{
    color = carrot_color;
}
void carrot :: setterBaby(bool oh_yeah_setter_baby)
{
    baby_or_not = oh_yeah_setter_baby;
}
//getters
int carrot :: getterMass()
{
    return mass;
}
int carrot :: getterLenght()
{
    return lenght;
}
std :: string carrot :: getterColor()
{
    return color;
}
bool carrot :: getterBaby()
{
    return baby_or_not;
}
//constructors
carrot :: carrot()
{
    mass = 75;
    lenght = 14;
    color = "purple";
    baby_or_not = false; 
}
carrot :: carrot(int m)
{
    setterMass(m);
    lenght = 6;
    color = "orange";
    baby_or_not = true; 
}
carrot :: carrot(int m , int l)
{
    setterMass(m);
    setterLenght(l);
    color = "yellow";
    baby_or_not = false; 
}
carrot :: carrot(int m , int l , std :: string col)
{
    setterMass(m);
    setterLenght(l);
    setterColor(col);
    baby_or_not = true; 
}
carrot :: carrot(int m, int l, std :: string col, bool no)
{
    setterMass(m);
    setterLenght(l);
    setterColor(col);
    setterBaby(no);
}
carrot :: ~carrot()
{
    //std :: cout << "The carrot class object was destroyed" << std :: endl;
}