#ifndef MANEJADOREMPLEADOS_H
#define MANEJADOREMPLEADOS_H

#include <vector>
#include <memory>
#include "Empleado.h"

class ManejadorEmpleados
{
private:
    std::vector < std :: unique_ptr <Empleado>> empleados; // vector empleados de la clase Empleado
public:
    ManejadorEmpleados();// defino constructor
    void crearEmpleado(int id, const std::string& nombre);
    void listarEmpleado();
    Empleado * buscarEmpleadoPorId(int id);// devuelve un puntero de un objeto Empleado

    ~ManejadorEmpleados();
};


#endif