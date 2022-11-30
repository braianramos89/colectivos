//
// Created by braian on 29/11/2022.
//

#ifndef TEMPLATECPP_LINEA_H
#define TEMPLATECPP_LINEA_H
#include <iostream>
#include <vector>
#include "ViajeCoche.h"

using namespace std;
class Linea {

private:
    int nroLinea;
    vector<ViajeCoche> viajesCoche;
    float recaudacionTotalLinea;

public:
    Linea(int nroLinea);
    ~Linea();
    int getNroLinea();
    float getRecaudacionTotalLinea();
    void agregarViajeCoche(Coche * coche, float recaudacionTotalViaje);
    void calcularRecaudacionTotalLinea();

};

inline int Linea::getNroLinea() {
    return nroLinea;
}

inline float Linea::getRecaudacionTotalLinea() {
    return recaudacionTotalLinea;
}



#endif //TEMPLATECPP_LINEA_H
