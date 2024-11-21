#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Pedido.h"
#include "Administrador.h"
#include "Inventario.h"

using namespace std;

class Tienda {
private:
    vector<Producto> productos;
    vector<Cliente> clientes;
    vector<Pedido> pedidos;
    Administrador administrador;
    Inventario inventario;

public:
    Tienda();

    void agregarCliente(Cliente cliente);
    void agregarPedido(Pedido pedido);
    void listarProductos();
};

#endif // TIENDA_H
