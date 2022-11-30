
#ifndef TEMPLATECPP_EMPRESA_H
#define TEMPLATECPP_EMPRESA_H
#include "Linea.h"
#include "Coche.h"

using namespace std;

class Empresa {

private:
    vector<Linea> VectorLineas;
    vector<Coche> VectorCoches;
    string nombre;

    public:

    Empresa(string nombre);
    ~Empresa();

    void agregarCoche();
    void agregarViaje();

    Coche * buscarCoche(int nroCoche);

    //requerimiento
    void mostrarRecaudacionTotalEmpresa();
    void mostrarRecaudacionTotalLinea();
    void mostrarRecaudacionTotalCoche();

};


#endif //TEMPLATECPP_EMPRESA_H
