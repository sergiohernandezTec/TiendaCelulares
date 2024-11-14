cmake_minimum_required(VERSION 3.29)
project(TiendaCelulares)

set(CMAKE_CXX_STANDARD 20)

add_executable(TiendaCelulares main.cpp
        SergioClass.cpp
        SergioClass.h
        Factura.cpp
        Factura.h
        Comentario.cpp
        Comentario.h
        Direccion.cpp
        Direccion.h
        Proveedor.cpp
        Proveedor.h
        TelefonoBasico.cpp
        TelefonoBasico.h
)
