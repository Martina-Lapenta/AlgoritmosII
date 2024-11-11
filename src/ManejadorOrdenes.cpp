#include "ManejadorOrdenes.h"
#include<iostream>

//IMPLEMENTO CONSTRUCTOR Y metodos
ManejadorOrdenes :: ManejadorOrdenes (){
    std::cout <<"ManejadorOrdenes creado.\n ";
}

void ManejadorOrdenes::crearOrden(int codigo, Articulo*articulo, Empleado* empleado, Proveedor* proveedor ){
    ordenes.push_back (std::make_unique <Orden> (codigo, articulo, empleado, proveedor));//creando una nueva instancia de la clase orden
    std::cout <<"Pedido agregado exitosamente. \n";
}

void ManejadorOrdenes:: listarOrdenes () const{
    std::cout << "Listado de ordenes:\n";
    std::cout << "Total de ordenes: " << ordenes.size() << "\n";

   for (const auto& orden: ordenes) {
    std::cout << "Codigo de Orden: " << orden->getCodigo() << "\n";
    std::cout << "Proveedor: " << (orden->getProveedor() ? orden->getProveedor()->getNombre() : "nulo") << "\n";
    std::cout << "Empleado: " << (orden->getEmpleado() ? orden->getEmpleado()->getNombre() : "nulo") << "\n";
    std::cout << "Articulo: " << (orden->getArticulo() ? orden->getArticulo()->getNombre() : "nulo") << "\n";
}

}
ManejadorOrdenes::~ManejadorOrdenes() {
    std::cout << "Liberando recursos del ManejadorOrdenes...\n";
}
