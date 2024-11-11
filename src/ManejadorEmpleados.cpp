#include "ManejadorEmpleados.h"
#include <iostream>

//Implemento el constructor y los metodos
ManejadorEmpleados :: ManejadorEmpleados (){
    std::cout <<"ManejadorEmpelados creado.\n ";
}

void ManejadorEmpleados :: crearEmpleado (int id, const std::string& nombre){
    empleados.push_back (std::make_unique <Empleado>(id, nombre));
    std::cout <<"Empleado ingresado.\n";
    //se crea un nuevo objeto Empleado, se envuelve en un puntero inteligente
    // y luego es almacenado en el vector(lista) de articulos
}

void ManejadorEmpleados :: listarEmpleado(){
    std::cout <<"Listar Empleados: \n";
    for (const auto& empleado :empleados){
        std::cout << "ID: "<< empleado ->getId() << "Nombre: " << empleado -> getNombre()<< "\n";
          
    }
}

Empleado* ManejadorEmpleados ::buscarEmpleadoPorId (int id){
    for (const auto& empleado : empleados ){
        if (empleado -> getId() == id ) return empleado.get();
        // si encuenta un empleado con el mismo id devuelve un puntero al empleado
    }
    return nullptr;//si no lo encuentra
}

ManejadorEmpleados::~ManejadorEmpleados() {
    std::cout << "Liberando recursos del ManejadorEmpleados...\n";
}