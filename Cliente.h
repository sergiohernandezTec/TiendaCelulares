#ifndef CLIENTE_H
#define CLIENTE_H

#include <vector>
#include <string>
using namespace std;

class Direccion {       // Clase Direccion
public:
    string calle;
    string numero;
    string ciudad;
    string estado;
    string codigoPostal;

    Direccion(string c, string n, string ci, string e, string cp);
    void mostrarDireccion() const;
};

class MetodoPago {      // Clase MetodoPago
public:
    string tipo;
    string numero;

    MetodoPago(string t, string n);
    void mostrarMetodoPago() const;
};

class Pedido {      // Clase Pedido
public:
    int idPedido;
    float total;

    Pedido(int id, float t);
    void mostrarPedido() const;
};

class Carrito {     // Clase Carrito
public:
    vector<string> productos;
    float total;

    Carrito();
    void agregarProducto(const string& producto, float precio);
    void mostrarCarrito() const;
};

class Cliente {     // Clase Cliente
public:
    string nombre;
    Direccion direccion;
    string email;
    vector<Pedido> pedidos;
    Carrito carrito;
    MetodoPago metodoPago;

    Cliente(string n, Direccion d, string e, MetodoPago mp);
    void mostrarInformacion() const;
    void agregarPedido(const Pedido& pedido);
    void mostrarPedidos() const;
};

#endif
