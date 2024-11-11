#ifndef MANEJADORPROVEEDORES_H
#define MANEJADORPROVEEDORES_H


#include <vector>
#include <memory>
#include "Proveedor.h"

class ManejadorProveedores
{
    private:
    std::vector <std:: unique_ptr <Proveedor>> proveedores;//lista proveedores de la clase Proveedor

    public:
    ManejadorProveedores ();//define el constructor 
    void crearProveedor(int id,const std::string& nombre);
    void listarProveedor ();
    Proveedor* buscarProveedorPorId(int id);// devuelve un puntero de un objeto Proveedor

    ~ManejadorProveedores();
};


#endif