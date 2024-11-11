#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include "ManejadorArticulos.h"
#include "ManejadorEmpleados.h"
#include "ManejadorProveedores.h"
#include "ManejadorOrdenes.h"
#include "Articulo.h"
#include "Empleado.h"
#include "Proveedor.h"
#include "Orden.h"

void pausa() {
    std::cout << "\nPresione Enter para continuar...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    ManejadorArticulos manejadorArticulos;
    ManejadorEmpleados manejadorEmpleados;
    ManejadorProveedores manejadorProveedores;
    ManejadorOrdenes manejadorOrdenes;

    int opcionPrincipal;

    do {
        std::cout << "===== Menu Principal =====\n";
        std::cout << "1. Articulos\n";
        std::cout << "2. Proveedores\n";
        std::cout << "3. Empleados\n";
        std::cout << "4. Pedidos\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 1: { // Articulos
                int opcionArticulo;
                do {
                    std::cout << "===== Submenu Articulos =====\n";
                    std::cout << "1. Agregar Articulo\n";
                    std::cout << "2. Mostrar Articulos\n";
                    std::cout << "0. Volver al Menu Principal\n";
                    std::cout << "Seleccione una opcion: ";
                    std::cin >> opcionArticulo;

                    switch (opcionArticulo) {
                        case 1: {
                            int id;
                            std::string nombre;
                            double precio;
                            std::cout << "Ingrese ID: ";
                            std::cin >> id;
                            std::cout << "Ingrese Nombre: ";
                            std::cin.ignore(); // Ignorar el salto de línea
                            std::getline(std::cin, nombre);
                            std::cout << "Ingrese Precio: ";
                            std::cin >> precio;
                            manejadorArticulos.crearArticulo(id, nombre, precio);
                            break;
                        }
                        case 2:
                            manejadorArticulos.listarArticulo();
                            break;
                        case 0:
                            break;
                        default:
                            std::cout << "Opcion no válida. Intente de nuevo.\n";
                    }
                } while (opcionArticulo != 0);
                break;
            }
            case 2: { // Proveedores
                int opcionProveedor;
                do {
                    std::cout << "===== Submenu Proveedores =====\n";
                    std::cout << "1. Agregar Proveedor\n";
                    std::cout << "2. Mostrar Proveedores\n";
                    std::cout << "0. Volver al Menu Principal\n";
                    std::cout << "Seleccione una opcion: ";
                    std::cin >> opcionProveedor;

                    switch (opcionProveedor) {
                        case 1: {
                            int id;
                            std::string nombre;
                            std::cout << "Ingrese ID: ";
                            std::cin >> id;
                            std::cout << "Ingrese Nombre: ";
                            std::cin.ignore(); // Ignorar el salto de línea
                            std::getline(std::cin, nombre);
                            manejadorProveedores.crearProveedor(id, nombre);
                            break;
                        }
                        case 2:
                            manejadorProveedores.listarProveedor();
                            break;
                        case 0:
                            break;
                        default:
                            std::cout << "Opcion no válida. Intente de nuevo.\n";
                    }
                } while (opcionProveedor != 0);
                break;
            }
            case 3: { // Empleados
                int opcionEmpleado;
                do {
                    std::cout << "===== Submenu Empleados =====\n";
                    std::cout << "1. Agregar Empleado\n";
                    std::cout << "2. Mostrar Empleados\n";
                    std::cout << "0. Volver al Menu Principal\n";
                    std::cout << "Seleccione una opcion: ";
                    std::cin >> opcionEmpleado;

                    switch (opcionEmpleado) {
                        case 1: {
                            int id;
                            std::string nombre;
                            std::cout << "Ingrese ID: ";
                            std::cin >> id;
                            std::cout << "Ingrese Nombre: ";
                            std::cin.ignore(); // Ignorar el salto de línea
                            std::getline(std::cin, nombre);
                            manejadorEmpleados.crearEmpleado(id, nombre);
                            break;
                        }
                        case 2:
                            manejadorEmpleados.listarEmpleado();
                            break;
                        case 0:
                            break;
                        default:
                            std::cout << "Opcion no válida. Intente de nuevo.\n";
                    }
                } while (opcionEmpleado != 0);
                break;
            }
            case 4: {
                int subOption;
                std::cout << "\n--- Menu Pedidos ---\n";
                std::cout << "1. Agregar Pedido\n";
                std::cout << "2. Mostrar Pedidos\n";
                std::cout << "Seleccione una opcion: ";
                std::cin >> subOption;

                std::cin.clear(); // Limpiar cualquier estado de error
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar el buffer

                if (subOption == 1) {
                    int codigo, proveedorId, articuloId, empleadoId;

                    std::cout << "Ingrese Codigo del Pedido: ";
                    std::cin >> codigo;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    std::cout << "Ingrese ID del Proveedor: ";
                    std::cin >> proveedorId;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    // Buscar el proveedor por ID
                    Proveedor* proveedor = manejadorProveedores.buscarProveedorPorId(proveedorId);

                    // Verificar si el proveedor fue encontrado
                    if (proveedor) {
                        std::cout << "Proveedor encontrado: " << proveedor->getNombre() << "\n";
                    } else {
                        std::cout << "Proveedor no encontrado. No se puede agregar el pedido.\n";
                        break; // Salimos de la opción si el proveedor no se encuentra
                    }

                    std::cout << "Ingrese ID del Articulo: ";
                    std::cin >> articuloId;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    std::cout << "Ingrese ID del Empleado: ";
                    std::cin >> empleadoId;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    // Buscar articulo y empleado
                    Articulo* articulo = manejadorArticulos.buscarArticuloPorId(articuloId);
                    Empleado* empleado = manejadorEmpleados.buscarEmpleadoPorId(empleadoId);

                    if (articulo && empleado) {
                        manejadorOrdenes.crearOrden(codigo, articulo, empleado, proveedor);
                        std::cout << "Pedido agregado exitosamente.\n";
                    } else {
                        std::cout << "Error: Articulo o empleado no encontrado.\n";
                    }

                } else if (subOption == 2) {
                    manejadorOrdenes.listarOrdenes();
                } else {
                    std::cout << "Opcion inválida. Intente nuevamente.\n";
                }

                break; // Salir del case
            }

            
                        case 0:
                            std::cout << "Saliendo del programa...\n";
                            break;
                        default:
                            std::cout << "Opcion no válida. Intente de nuevo.\n";
                    }
                } while (opcionPrincipal != 0);

                return 0;
            }
