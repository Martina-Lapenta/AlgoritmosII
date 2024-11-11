#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>
//Estas clases contienen la información básica para cada entidad y métodos para acceder a sus datos.
class Articulo {
private:
    int id;
    std::string nombre;
    double precio;

public:
    Articulo(int id, const std::string nombre, double precio);//declaración del constructor
    //metodos getters
    int getId() const;
    std::string getNombre()const;
    double getPrecio()const;

};
#endif