//
// Created by Valeria Porcayo on 21/11/24.
//

#ifndef CARRITO_H
#define CARRITO_H
#include <string>
#include <vector>
#include "Producto.h"
using namespace std;

class Carrito {
private:
  vector<Producto> productosSeleccionados;
  public:
    Carrito();
    void agregarProducto(Producto producto);
    void mostrarCarrito();
};



#endif //CARRITO_H
