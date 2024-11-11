#include "Orden.h"

//Implementacion del constructor 
Orden :: Orden (int codigo, Articulo* articulo,Empleado* empleado, Proveedor* proveedor ) : codigo(codigo), articulo(articulo), empleado(empleado), proveedor(proveedor){}

//Implementacion de los metodos 
int Orden :: getCodigo() const{return codigo;}
Articulo* Orden:: getArticulo() const {return articulo;}
Empleado* Orden:: getEmpleado()const {return empleado;}
Proveedor* Orden :: getProveedor() const {return proveedor;}
