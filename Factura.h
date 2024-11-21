//
// Created by Nat on 14/11/2024.
//

#ifndef FACTURA_H
#define FACTURA_H
#include <vector>
#include "Pedido.h"

using namespace std;

class Factura {
private:
    vector<Producto> productos;
    double total;
};
#endif