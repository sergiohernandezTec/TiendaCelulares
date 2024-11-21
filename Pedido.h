
#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include<vector>
#include<Cliente.h>
#include<Produto.h>
#include<Factura.h>
#include<Pedido.h>

using namespace std;

class Pedido:public Cliente{
private:
    int idPedido;
    string fecha;
    double total;
    vector <Producto>productos;
    Factura factura;
    Envio envio;
public:
  Pedido(int idPedido, string fecha);
  void agregarProducto();
  double calcularTotal();
  void generarFactura();
};



#endif //PEDIDO_H
