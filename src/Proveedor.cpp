#include "Proveedor.h"

//implemento el constructor y con la lista le doy los valores
Proveedor :: Proveedor (int id, const std::string nombre) : id(id),nombre(nombre){}

//implemento los metodos
int Proveedor:: getId () const {return id;}
std::string Proveedor :: getNombre() const {return nombre;}