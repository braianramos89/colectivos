//
// Created by braian on 29/11/2022.
//

#include "Linea.h"

Linea::Linea(int nroLinea) {
    this->nroLinea = nroLinea;
    this->recaudacionTotalLinea = 0;
}

Linea::~Linea() {

}

void Linea::agregarViajeCoche(Coche *coche, float recaudacionTotalViaje) {
    ViajeCoche viajeCoche(coche, recaudacionTotalViaje);
    viajesCoche.push_back(viajeCoche);
    calcularRecaudacionTotalLinea();
}

void Linea::calcularRecaudacionTotalLinea(){
    for(int i=0 ; i<viajesCoche.size();i ++){
        this->recaudacionTotalLinea += viajesCoche[i].getRecaudacionTotalViaje();
    }


}


