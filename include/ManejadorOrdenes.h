#ifndef MANEJADORORDENES_H
#define MANEJADORORDENES_H

#include <memory>
#include <vector>
#include "Orden.h"
#include "Articulo.h"
#include "Proveedor.h"
#include "Empleado.h"

class ManejadorOrdenes
{
private:
    std::vector < std::unique_ptr <Orden>> ordenes;// vector empleados de la clase Empleado

public:
    ManejadorOrdenes();// defino constructor
    void crearOrden(int codigo, Articulo* ariculo, Empleado* empleado, Proveedor* proveedor );
    void listarOrdenes() const;

    ~ManejadorOrdenes();
};



#endif