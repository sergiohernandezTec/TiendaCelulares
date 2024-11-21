#include "Pedido.h"
#include <string>
#include<vector>
#include<Cliente.h>
using namespace std;

Pedido::Pedido(int id, string fecha):id(id),fecha(fec){}

void Pedido::agregarProducto(Producto producto) {
    productos.push_back(producto);
}
