//
// Created by braian on 29/11/2022.
//

#include "Empresa.h"

Empresa::Empresa(string nombre) {
    this->nombre = nombre;
    Linea linea(1);
    this->VectorLineas.push_back(linea);
    Linea linea2(2);
    this->VectorLineas.push_back(linea2);
    Linea linea3(3);
    this->VectorLineas.push_back(linea3);


}

Empresa::~Empresa() {

}

void Empresa::agregarCoche() {
    Coche coche1(1);
    this->VectorCoches.push_back(coche1);
    Coche coche2(2);
    this->VectorCoches.push_back(coche2);
    Coche coche3(3);
    this->VectorCoches.push_back(coche3);
    Coche coche4(4);
    this->VectorCoches.push_back(coche4);

}

Coche * Empresa::buscarCoche(int nroCoche) {
    for(int i=0; i<VectorCoches.size();i++){
        if(VectorCoches[i].getNro() == nroCoche){
            return &VectorCoches[i];
        }
    }
    return nullptr;
}

void Empresa::agregarViaje() {

    Coche * coche = buscarCoche(1);
    if(coche != nullptr){
        VectorLineas[0].agregarViajeCoche(coche, 1000);
        coche->setRecaudacionTotalCoche(coche->getRecaudacionTotalCoche() + 1000);
        }
    Coche * coche2 = buscarCoche(2);
    if(coche2 != nullptr){
        VectorLineas[1].agregarViajeCoche(coche2, 2000);
        coche2->setRecaudacionTotalCoche(coche2->getRecaudacionTotalCoche() + 2000);
        }
    Coche * coche3 = buscarCoche(3);
    if(coche3 != nullptr){
        VectorLineas[2].agregarViajeCoche(coche3, 3000);
        coche3->setRecaudacionTotalCoche(coche3->getRecaudacionTotalCoche() + 3000);
        }
  /*  Coche * coche4 = buscarCoche(4);
    if(coche4 != nullptr){
        VectorLineas[2].agregarViajeCoche(coche4, 4000);
        coche4->setRecaudacionTotalCoche(coche4->getRecaudacionTotalCoche() + 4000);
        }
    Coche * coche5 = buscarCoche(1);
    if(coche5 != nullptr){
        VectorLineas[1].agregarViajeCoche(coche5, 5000);
        coche5->setRecaudacionTotalCoche(coche5->getRecaudacionTotalCoche() + 5000);
        }*/
}

void Empresa::mostrarRecaudacionTotalEmpresa() {
    float recaudacionTotalEmpresa = 0;
    for(int i=0; i<VectorLineas.size();i++){
        recaudacionTotalEmpresa += VectorLineas[i].getRecaudacionTotalLinea();
    }
    cout << "La recaudacion total de la empresa es: " << recaudacionTotalEmpresa << endl;
}

void Empresa::mostrarRecaudacionTotalLinea() {
    for(int i=0; i<VectorLineas.size();i++){
        cout << "La recaudacion total de la linea " << VectorLineas[i].getNroLinea() << " es: " << VectorLineas[i].getRecaudacionTotalLinea() << endl;
    }
}

void Empresa::mostrarRecaudacionTotalCoche() {
    for(int i=0; i<VectorCoches.size();i++){
        cout << "La recaudacion total del coche " << VectorCoches[i].getNro() << " es: " << VectorCoches[i].getRecaudacionTotalCoche() << endl;
    }
}


