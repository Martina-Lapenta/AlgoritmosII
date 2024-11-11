#ifndef MANEJADORARTICULOS_H
#define MANEJADORARTICULOS_H

#include <vector>
#include "Articulo.h"
#include <memory>

class ManejadorArticulos
{
private:
    std:: vector <std :: unique_ptr<Articulo>> articulos;//vector de articulos (es una lista de objetos Articulos)
public:
    ManejadorArticulos(); //defino constructor
    void crearArticulo(int id, const std::string& nombre, double precio);
    void listarArticulo();
    Articulo* buscarArticuloPorId(int id);// devuelve un puntero de un objeto Articulo
    ~ManejadorArticulos();
};




#endif