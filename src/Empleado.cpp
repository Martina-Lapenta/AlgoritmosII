#include "Empleado.h"

//Implemento el constructor
Empleado :: Empleado (int id, std::string nombre) : id(id), nombre (nombre){}

//Implemento los metodos
int Empleado :: getId() const {return id;}
std::string Empleado :: getNombre() const {return nombre;}