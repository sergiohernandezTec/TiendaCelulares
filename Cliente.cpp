#include "Cliente.h"
#include <iostream>

Direccion::Direccion(string c, string n, string ci, string e, string cp)    // Hacia Direccion
    : calle(c), numero(n), ciudad(ci), estado(e), codigoPostal(cp) {}

void Direccion::mostrarDireccion() const {
    cout << calle << " " << numero << ", " << ciudad << ", " << estado << ", " << codigoPostal << endl;
}

MetodoPago::MetodoPago(string t, string n)      // Hacia MetodoPago
    : tipo(t), numero(n) {}

void MetodoPago::mostrarMetodoPago() const {
    cout << "Tipo de pago: " << tipo << ", Número: " << numero << endl;
}

Pedido::Pedido(int id, float t)     // Hacia Pedido
    : idPedido(id), total(t) {}

void Pedido::mostrarPedido() const {
    cout << "Pedido ID: " << idPedido << ", Total: $" << total << endl;
}

Carrito::Carrito() : total(0.0) {}      // Hacia Carrito

void Carrito::agregarProducto(const string& producto, float precio) {
    productos.push_back(producto);
    total += precio;
}

void Carrito::mostrarCarrito() const {
    cout << "Productos en el carrito: \n";
    for (const auto& producto : productos) {
        cout << "- " << producto << endl;
    }
    cout << "Total carrito: $" << total << endl;
}

Cliente::Cliente(string n, Direccion d, string e, MetodoPago mp)    // Hacia Cliente
    : nombre(n), direccion(d), email(e), metodoPago(mp) {}

void Cliente::mostrarInformacion() const {
    cout << "Cliente: " << nombre << endl;
    cout << "Email: " << email << endl;
    cout << "Direccion: ";
    direccion.mostrarDireccion();
    cout << "Metodo de pago: ";
    metodoPago.mostrarMetodoPago();
    carrito.mostrarCarrito();
}

void Cliente::agregarPedido(const Pedido& pedido) {
    pedidos.push_back(pedido);
}

void Cliente::mostrarPedidos() const {
    cout << "Pedidos del cliente: \n";
    for (const auto& pedido : pedidos) {
        pedido.mostrarPedido();
    }
}