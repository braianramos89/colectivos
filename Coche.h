#ifndef TEMPLATECPP_COCHE_H
#define TEMPLATECPP_COCHE_H
#include <iostream>


using namespace std;

class Coche {

private:
    int nro;
    float recaudacionTotalCoche;

public:

    Coche(int nro);
    ~Coche();
    int getNro();

    float getRecaudacionTotalCoche();
    void setRecaudacionTotalCoche(float recaudacionTotalCoche);

};

inline int Coche::getNro() {
    return nro;
}

inline float Coche::getRecaudacionTotalCoche() {
    return recaudacionTotalCoche;
}

inline void Coche::setRecaudacionTotalCoche(float recaudacionTotalCoche) {
    Coche::recaudacionTotalCoche = recaudacionTotalCoche;
}







#endif //TEMPLATECPP_COCHE_H
