#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/Proveedor.h"  

TEST_CASE("Pruebas de la clase Proveedor", "[Proveedor]") {
    // Creacion de objeto proveedor
    Proveedor proveedor(1, "Proveedor 1");

    SECTION("Inicialización correcta") {
        // Verificamos que el ID y el nombre se inicializan correctamente
        REQUIRE(proveedor.getId() == 1);
        REQUIRE(proveedor.getNombre() == "Proveedor 1");
    }


    SECTION("Verificar ID válido") {
        REQUIRE(proveedor.getId() > 0); // Verificamos que el ID sea mayor que cero
    }
}
