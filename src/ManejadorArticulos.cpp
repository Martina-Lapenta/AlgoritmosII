#include "ManejadorArticulos.h"
#include <iostream>  


//implementacion del constructor
ManejadorArticulos :: ManejadorArticulos () {

    std::cout <<"Objeto creado.\n";
}

//implementacion de los metodos
void ManejadorArticulos :: crearArticulo (int id, const std::string& nombre, double precio ) {
    articulos.push_back(std::make_unique<Articulo> (id, nombre, precio));
    //se crea un nuevo objeto Articulo, se envuelve en un puntero inteligente y luego
    // es almacenado en el vector(lista) de articulos
    std::cout << "Articulo agregado.\n";
}

void ManejadorArticulos :: listarArticulo(){
    std::cout << "Listar articulos.\n";
    for(const auto& articulo : articulos){
        std::cout <<"ID : " << articulo ->getId()<<", Nombre: " << articulo ->getNombre() <<", Precio: " << articulo->getPrecio()<< "\n" ;

    }
}

Articulo* ManejadorArticulos ::buscarArticuloPorId (int id){
    for (const auto& articulo : articulos){
        if (articulo -> getId() == id ) return articulo.get(); 
        //si se encuenta un articulo con el mismo id devuelve un puntero al articulo  

    }

    return nullptr;//si no lo encuentra

}

ManejadorArticulos::~ManejadorArticulos() {
    std::cout << "Liberando recursos del ManejadorArticulos...\n";
}
