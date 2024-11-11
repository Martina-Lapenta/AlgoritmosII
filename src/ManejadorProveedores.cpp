#include "ManejadorProveedores.h"
#include <iostream>
#include <algorithm>


//implemento el constructor y metodos

ManejadorProveedores :: ManejadorProveedores (){
    std:: cout <<"ManejadorProveedores creado.\n ";
}


void ManejadorProveedores :: crearProveedor (int id, const std::string& nombre){
    proveedores.push_back (std::make_unique <Proveedor> (id, nombre));
    std::cout <<"Proveedor ingresado.\n";
    //se crea un nuevo objeto Proveedor, se envuelve en un puntero inteligente
    // y luego es almacenado en el vector(lista) de articulos";

}

void ManejadorProveedores :: listarProveedor (){
    std::cout << "Listar Proveedores\n";
    for (const auto& proveedor: proveedores){
        std::cout << "ID: "<< proveedor ->getId() << "Nombre: "<< proveedor ->getNombre()<< "\n"; 
    }

}

Proveedor* ManejadorProveedores :: buscarProveedorPorId(int id){
    for(const auto& proveedor : proveedores ){
        if (proveedor -> getId() == id ) {return proveedor.get();}
        // si encuenta un proveedor con el mismo id devuelve un puntero al provedor
    }
    return nullptr;//si no lo encuentra

}


ManejadorProveedores::~ManejadorProveedores() {
    std::cout << "Liberando recursos del ManejadorProveedores...\n";
}