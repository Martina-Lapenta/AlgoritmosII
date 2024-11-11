#ifndef ORDEN_H
#define ORDEN_H

#include <string>
#include "Articulo.h"
#include "Empleado.h"
#include "Proveedor.h"

 //En lugar de almacenar toda la información del artículo, empleado o proveedor,
 // la clase Orden guarda punteros a los objetos correspondientes.
class Orden {
private:
    int codigo;
    Articulo* articulo;
    Empleado* empleado;
    Proveedor* proveedor;

    public:
    //constructor
    Orden (int codigo, Articulo* articulo,Empleado* empleado, Proveedor* proveedor );
    int getCodigo () const;
    //con los get abtengo 
    Articulo* getArticulo() const;
    Empleado * getEmpleado()const;
    Proveedor* getProveedor()const;
};


#endif
