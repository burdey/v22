//
// Created by Satori on 2022/5/31.
//

#ifndef ANIMAL_VEGIE_H
#define ANIMAL_VEGIE_H

#include <iostream>
using namespace std;

class vegie {

private:
    string favourite_food;     // the vegie's favourite food, initialise to "grass"
    static int nextID;

public:
    vegie(string n,int v);
    string get_name();
    string get_favourite_food();
    void set_favourite_food(int r);

};


#endif //ANIMAL_VEGIE_H
