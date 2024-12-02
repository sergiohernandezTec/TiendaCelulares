//
// Created by Valeria Porcayo on 21/11/24.
//

#include "Carrito.h"

Carrito::Carrito() {}
void Carrito::agregarProducto(Producto producto) {
  this->productosSeleccionados.push_back(producto);
}
void Carrito::mostrarCarrito() {
  for (int i = 0; i < this->productosSeleccionados.size(); i++) {
    //this->productosSeleccionados[i].mostrarProducto();
    // Se necesita la implementación de mostrar producto de la clase producto
  }
}