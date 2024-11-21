//
// Created by leo on 14/11/2024.
//

#ifndef ENVIO_H
#define ENVIO_H
#include <string>
using namespace std;



class Envio {
private:
  double costo;
  string tiempoEstimado;

public:
  Envio(double c, string t): costo(c), tiempoEstimado(t) {}

};


#endif //ENVIO_H
