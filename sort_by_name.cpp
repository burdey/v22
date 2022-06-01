//
// Created by Satori on 2022/6/1.
//

#include "sort_by_name.h"

void sort_by_name::sort(animal **animals,int n){
    animal* i;
    for(int i=0; i< n; i++){
        for(int i=0; i<n-1; i++){
            if(aniaml[j]->get_name() > animal[j+1]->get_name()){
                t = animal[j];
                animal[j] = animal[j+1];
                animal[j+1] = t;
            }
        }
    }
}