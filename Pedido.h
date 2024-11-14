
#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include<vector>
#include<Cliente.h>
using namespace std;


class Pedido:public Cliente{
private:
    int idPedido;
    string fecha;
    double total;
    vector <Producto>productos;
    Factura factura;
    Envio envio;
};



#endif //PEDIDO_H
