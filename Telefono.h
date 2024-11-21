//
// Created by CMM on 21/11/2024.
//

#ifndef TELEFONO_H
#define TELEFONO_H

#include <iostream>
#include <string>



    class Telefono {
    private:
        std::string modelo;
        std::string marca;
        std::string especificaciones;

    public:
        // Constructor
        Telefono(std::string m, std::string b, std::string e)
            : modelo(m), marca(b), especificaciones(e) {}

        // Getters
        std::string getModelo() {
            return modelo;
        }

        std::string getMarca() {
            return marca;
        }

        std::string getEspecificaciones() {
            return especificaciones;
        }


        void mostrarInformacion() {
            std::cout << "Modelo: " << modelo << std::endl;
            std::cout << "Marca: " << marca << std::endl;
            std::cout << "Especificaciones: " << especificaciones << std::endl;
        }
    };

    int main() {
        std::string modelo, marca, especificaciones;


        std::cout << "Ingrese el modelo del teléfono: ";
        std::getline(std::cin, modelo);

        std::cout << "Ingrese la marca del teléfono: ";
        std::getline(std::cin, marca);

        std::cout << "Ingrese las especificaciones del teléfono: ";
        std::getline(std::cin, especificaciones);


        Telefono telefono1(modelo, marca, especificaciones);


        telefono1.mostrarInformacion();

        return 0;
    }


#endif
