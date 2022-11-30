//
// Created by braian on 29/11/2022.
//

#ifndef TEMPLATECPP_VIAJECOCHE_H
#define TEMPLATECPP_VIAJECOCHE_H
#include <iostream>
#include "Coche.h"

using namespace std;

class ViajeCoche {

private:
    Coche *coche;
    float recaudacionTotalViaje;

public:
    ViajeCoche(Coche *coche, float recaudacionTotalViaje);
    ~ViajeCoche();

    float getRecaudacionTotalViaje();

};


inline float ViajeCoche::getRecaudacionTotalViaje() {
    return recaudacionTotalViaje;
}


#endif //TEMPLATECPP_VIAJECOCHE_H
