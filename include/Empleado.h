#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado
{
private:
    int id;
    std::string nombre;
public:
    Empleado(int id, std:: string nombre); //DECLARA EL CONSTRUCTOR Empleado
    int getId() const; //declara los metodos 
    std::string getNombre() const;
};




#endif