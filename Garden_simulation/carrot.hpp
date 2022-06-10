#ifndef _CARROT_
#define _CARROT_

#include <string> 

class carrot
{
    private:
    int mass;
    int lenght;
    std :: string color; 
    bool baby_or_not;
    

//https://www.youtube.com/watch?v=R5yrEKeDHgA
    public:
    static float price;
    //setters
    void setterMass(int);
    void setterLenght(int);
    void setterColor(std :: string);
    void setterBaby(bool );
    //getters
    int getterMass();
    int getterLenght();
    std :: string getterColor();
    bool getterBaby();
    // constructors
    //default
    carrot();
    carrot(int);
    carrot(int, int);
    carrot(int, int, std :: string);
    carrot(int, int , std :: string, bool);
    // destructor
    ~carrot();
    
};


#endif