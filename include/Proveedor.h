#ifndef PROVEEDOR_H
#define PROVEEDOR_H

#include <string>

class Proveedor
{
private:
    int id;
    std :: string nombre; 
public:
    Proveedor (int id,const std :: string nombre);//def costructor
    int getId() const;
    std:: string getNombre() const;
};



#endif