//
// Created by Natalia on 14/11/2024.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <vector>
#include "Comentario.h"
using namespace std;

class Producto {
private:
    string codigo;
    string nombre;
    double precio;
    vector<Comentario> comentarios;
public:

};



#endif //PRODUCTO_H
