#include <iostream>
#include "Empresa.h"


int main() {

    Empresa empresa("Empresa de Transporte");
    empresa.agregarCoche();
    empresa.agregarViaje();

    empresa.mostrarRecaudacionTotalEmpresa();
    empresa.mostrarRecaudacionTotalLinea();
    empresa.mostrarRecaudacionTotalCoche();




    return 0;
}
