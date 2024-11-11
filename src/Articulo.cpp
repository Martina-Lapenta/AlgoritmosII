#include "Articulo.h"

//Implementa constructor y usa la lista para establecer los valores
Articulo :: Articulo (int id, std:: string nombre, double precio) : id(id), nombre(nombre), precio (precio) {}

//Implementa los metodos
int Articulo :: getId() const {return id;}
std::string Articulo :: getNombre() const {return nombre;}
double Articulo :: getPrecio () const {return precio;}

