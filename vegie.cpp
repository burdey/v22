//
// Created by Satori on 2022/5/31.
//

#include "vegie.h"

int vegie::nextID = 100;

vegie::vegie(string n,int v){
    nextID++;
    favourite_food = "grass"
    animalID = nextID;
}

string vegie::get_name(){
    return "Safe: " + name;
}

string vegie::get_favourite_food(){
    return favourite_food;
}

void vegie::set_favourite_food(int r){
    favourite_food = r;
}