#include "Tienda.h"
#include <iostream>

using namespace std;

Tienda::Tienda() {

}

void Tienda::agregarCliente(Cliente cliente) {
    clientes.push_back(cliente);
    cout << "Cliente agregado: " << cliente.getNombre() << endl;
}

void Tienda::agregarPedido(Pedido pedido) {
    pedidos.push_back(pedido);
    cout << "Pedido agregado con ID: " << pedido.getIdPedido() << endl;
}

void Tienda::listarProductos() {
    cout << "Productos disponibles en la tienda:\n";
    inventario.listarProductos();
}
