#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <limits>
#include <unordered_map>
#include "UsuarioNormal.h"
#include "Nino.h"
#include "Administrador.h"
#include "SoftwareJuego.h"
#include "SoftwareOfimatica.h"
#include "SoftwareProduccion.h"
#include "SoftwareNavegador.h"
#include "SoftwareSeguridad.h"
#include "SoftwareSocial.h"

// Funcion que crea lista de juegos
void crearListaGenerosJuegos() {
    // Crear una lista de géneros de juegos
    std::list<std::string> generosJuegos;

    // Agregar géneros a la lista
    generosJuegos.push_back("FPS");
    generosJuegos.push_back("MMO");
    generosJuegos.push_back("PUZZLE");
    generosJuegos.push_back("AVENTURA");
    generosJuegos.push_back("ROL");
    generosJuegos.push_back("DEPORTES");
    generosJuegos.push_back("PLATAFORMA");
    generosJuegos.push_back("ESTRATEGIA");
    generosJuegos.push_back("ARCADE");
    generosJuegos.push_back("SIMULACIÓN");
}

// Funcion que crea lista de tipos de Software Seguridad
void crearListaTiposSeguridad() {
    // Crear una lista de géneros de juegos
    std::list<std::string> generosSoftwareSeguridad;

    // Agregar géneros a la lista
    generosSoftwareSeguridad.push_back("RANSOMWARE");
    generosSoftwareSeguridad.push_back("SPYWARE");
    generosSoftwareSeguridad.push_back("BOTNETS");
    generosSoftwareSeguridad.push_back("ROOTKITS");
    generosSoftwareSeguridad.push_back("GUSANOS");
    generosSoftwareSeguridad.push_back("TROYANOS");
}

//Funcion poblar Usuarios
void crearUsuarios(std::vector<Usuario*>& usuarios) {
    // Crear y agregar un administrador
    Administrador* admin = new Administrador("admin", "adminpass", 30, "admin@admin.com", true);
    admin->agregarRol("Admin");
    usuarios.push_back(admin);

    // Crear y agregar usuarios normales
    for (int i = 0; i < 10; i++) {
        std::string username = "usuario" + std::to_string(i);
        std::string password = "contrasena" + std::to_string(i);
        std::string correo = username + "@taller1.com";
        UsuarioNormal* usuarioNormal = new UsuarioNormal(username, password, 25 + i, correo);
        usuarios.push_back(usuarioNormal);
        usuarioNormal->agregarRol("UsuarioNormal");
    }

    // Crear y agregar niños
    for (int i = 0; i < 4; i++) {
        std::string username = "nino" + std::to_string(i);
        std::string password = "contrasenaNino" + std::to_string(i);
        Nino* nino = new Nino(username, password, 10 + i);
        usuarios.push_back(nino);
        nino->agregarRol("Nino");
    }
}

//Funcion Poblar Juegos
std::vector<SoftwareJuego> crearJuegos() {
    std::vector<SoftwareJuego> juegos;

    // Agregar juegos a la base de datos
    juegos.push_back(SoftwareJuego("Juego1", "Desarrollador1", "E", {"usuario1", "Uusuario2"}, 49, "Acción"));
    juegos.push_back(SoftwareJuego("Juego2", "Desarrollador2", "E", {"usuario1", "usuario3"}, 59, "Aventura"));
    juegos.push_back(SoftwareJuego("Juego3", "Desarrollador3", "E", {"usuario2", "usuario4"}, 39, "Deportes"));
    juegos.push_back(SoftwareJuego("Juego4", "Desarrollador4", "E", {"usuario3", "usuario5"}, 69, "Acción"));
    juegos.push_back(SoftwareJuego("Juego5", "Desarrollador5", "E", {"usuario4", "usuario6"}, 79, "Aventura"));

    juegos.push_back(SoftwareJuego("Juego6", "Desarrollador6", "18+", {"usuario5", "usuario7"}, 89, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego7", "Desarrollador7", "18+", {"usuario6", "usuario8"}, 99, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego8", "Desarrollador8", "18+", {"usuario7", "usuario9"}, 79, "RPG"));
    juegos.push_back(SoftwareJuego("Juego9", "Desarrollador9", "18+", {"usuario8", "usuario10"}, 59, "RPG"));
    juegos.push_back(SoftwareJuego("Juego10", "Desarrollador10", "18+", {"usuario9", "usuario1"}, 69, "Deportes"));

    juegos.push_back(SoftwareJuego("Juego11", "Desarrollador11", "E", {"usuario3", "usuario5"}, 49, "Acción"));
    juegos.push_back(SoftwareJuego("Juego12", "Desarrollador12", "E", {"usuario7", "usuario3"}, 59, "Aventura"));
    juegos.push_back(SoftwareJuego("Juego13", "Desarrollador13", "E", {"usuario1", "usuario6"}, 39, "Deportes"));
    juegos.push_back(SoftwareJuego("Juego14", "Desarrollador14", "E", {"usuario5", "usuario2"}, 69, "Acción"));
    juegos.push_back(SoftwareJuego("Juego15", "Desarrollador15", "E", {"usuario7", "usuario5"}, 79, "Aventura"));
    
    juegos.push_back(SoftwareJuego("Juego16", "Desarrollador16", "18+", {"usuario4", "usuario2"}, 89, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego17", "Desarrollador17", "18+", {"usuario5", "usuario4"}, 99, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego18", "Desarrollador18", "18+", {"usuario5", "usuario3"}, 79, "RPG"));
    juegos.push_back(SoftwareJuego("Juego19", "Desarrollador19", "18+", {"usuario1", "usuario7"}, 59, "RPG"));
    juegos.push_back(SoftwareJuego("Juego20", "Desarrollador20", "18+", {"usuario8", "usuario2"}, 69, "Deportes"));

    return juegos;
}

//Poblar SoftwareOfimatica
std::vector<SoftwareOfimatica> crearSoftwareOfimatica() {
    std::vector<SoftwareOfimatica> softwareOfimaticaContainer;

    // Datos comunes para las instancias
    std::string nombreBase = "Ofimatica";
    std::string developerBase = "Empresa ABC";
    std::string clasificacionEdadBase = "E";
    std::list<std::string> listaUsuariosBase = {"usuario1", "usuario2", "usuario3"};
    int precioBase = 49;
    int cantidadArchivosBase = 100;

    for (int i = 1; i <= 5; i++) {
        // Generar nombres únicos para cada instancia
        std::string nombre = nombreBase + std::to_string(i);

        // Crear una instancia de SoftwareOfimatica y agregarla al contenedor
        SoftwareOfimatica ofimatica(nombre, developerBase, clasificacionEdadBase, listaUsuariosBase, precioBase, cantidadArchivosBase);
        softwareOfimaticaContainer.push_back(ofimatica);
    }

    return softwareOfimaticaContainer;
}

//Poblar Software produccion
std::vector<SoftwareProduccion> CrearSoftwareProduccion() {
    std::vector<SoftwareProduccion> softwareProduccion;
    
    softwareProduccion.push_back(SoftwareProduccion("Software1", "Desarrollador1", "E", {"usuario1", "usuario2"}, 99, "video"));
    softwareProduccion.push_back(SoftwareProduccion("Software2", "Desarrollador2", "E", {"usuario2", "usuario3"}, 89, "video"));
    softwareProduccion.push_back(SoftwareProduccion("Software3", "Desarrollador3", "E", {"usuario3", "usuario4"}, 79, "fotos"));
    softwareProduccion.push_back(SoftwareProduccion("Software4", "Desarrollador4", "E", {"usuario4", "usuario5"}, 69, "musica"));

    return softwareProduccion;
}


//Poblar SoftwareNavegador
std::vector<SoftwareNavegador> crearSoftwareNavegador() {
    std::vector<SoftwareNavegador> navegadores;

    // Crear instancias de SoftwareNavegador y agregarlas al vector
    SoftwareNavegador navegador1("Navegador1", "Desarrollador1", "E", {"usuario1", "usuario2"}, 0);
    SoftwareNavegador navegador2("Navegador2", "Desarrollador2", "E", {"usuario3", "usuario4"}, 0);

    // Agregar páginas al historial de navegador1
    navegador1.agregarPaginaAlHistorial("www.pagina1.com");
    navegador1.agregarPaginaAlHistorial("www.pagina2.com");
    navegador1.agregarPaginaAlHistorial("www.pagina3.com");

    // Agregar páginas al historial de navegador2
    navegador2.agregarPaginaAlHistorial("www.pagina1.com");
    navegador2.agregarPaginaAlHistorial("www.pagina2.com");
    navegador2.agregarPaginaAlHistorial("www.pagina3.com");

    // Agregar los navegadores al vector
    navegadores.push_back(navegador1);
    navegadores.push_back(navegador2);

    return navegadores;
}

//Poblar SoftwareSeguridad
std::vector<SoftwareSeguridad> crearSoftwareSeguridad() {
    std::vector<SoftwareSeguridad> softwareSeguridad;

    // Crear instancias de SoftwareSeguridad con objetos std::string para los argumentos
    SoftwareSeguridad s1("seguridad1", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 0, "Ransonware");
    SoftwareSeguridad s2("seguridad2", "Desarrollador2", "E", {"Usuario3", "Usuario4"}, 0, "Spyware");
    SoftwareSeguridad s3("seguridad3", "Desarrollador3", "E", {"Usuario5", "Usuario6"}, 0, "botnets");
    SoftwareSeguridad s4("seguridad4", "Desarrollador4", "E", {"Usuario7", "Usuario8"}, 0, "rootkits");
    SoftwareSeguridad s5("seguridad5", "Desarrollador5", "E", {"Usuario9", "Usuario5"}, 0, "gusanos");
    SoftwareSeguridad s6("seguridad6", "Desarrollador6", "E", {"Usuario1", "Usuario3"}, 0, "troyanos");

    // Agregar las instancias al vector
    softwareSeguridad.push_back(s1);
    softwareSeguridad.push_back(s2);
    softwareSeguridad.push_back(s3);
    softwareSeguridad.push_back(s4);
    softwareSeguridad.push_back(s5);
    softwareSeguridad.push_back(s6);

    return softwareSeguridad;
}

//Poblar SoftwareSocial
std::vector<SoftwareSocial> crearSoftwareSocial() {
    std::vector<SoftwareSocial> softwareSocial;

    // Crear una instancia de software social con clasificación de edad "E"
    SoftwareSocial social1("Red Social 1", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 0, 23);

    // Crear una instancia de software social con clasificación de edad "18+"
    SoftwareSocial social2("Red Social 2", "Desarrollador2", "18+", {"Usuario3", "Usuario4"}, 0, 32);

    // Agregar las instancias al vector
    softwareSocial.push_back(social1);
    softwareSocial.push_back(social2);

    return softwareSocial;
}


// Función para iniciar sesión
bool inicioSesion(const std::vector<Usuario*>& usuarios, Usuario*& usuarioLogueado) {
    std::string nombreUsuario;
    std::string contrasena;

    std::cout << "Ingrese el nombre de usuario: ";
    std::cin >> nombreUsuario;

    std::cout << "Ingrese la contraseña: ";
    std::cin >> contrasena;

    for (const Usuario* usuario : usuarios) {
        if (usuario->getNombreUsuario() == nombreUsuario && usuario->getContrasena() == contrasena) {
            usuarioLogueado = const_cast<Usuario*>(usuario); // Actualiza el usuario logueado
            return true; // Indica que el inicio de sesión fue exitoso
        }
    }

    // Maneja el caso en el que no se encuentra ningún usuario coincidente
    usuarioLogueado = nullptr; 
    return false; // Indica que el inicio de sesión fue incorrecto
}

SoftwareProduccion crearNuevoSoftwareProduccion() {
    std::string nombre;
    std::string desarrollador;
    std::string clasificacionEdad;
    int precio;
    std::string tipoSolucion;
    std::list<std::string> listaUsuarios = {};

    std::cout << "Ingrese el nombre del software de producción: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el nombre del desarrollador: ";
    std::getline(std::cin, desarrollador);

    std::cout << "Ingrese la clasificación de edad (E, 18+, etc.): ";
    std::cin >> clasificacionEdad;

    std::cout << "Ingrese el precio del software: ";
    std::cin >> precio;

    std::cout << "Ingrese el tipo de solución: ";
    std::cin.ignore();
    std::getline(std::cin, tipoSolucion);

    return SoftwareProduccion(nombre, desarrollador, clasificacionEdad, listaUsuarios,precio, tipoSolucion);
}

SoftwareJuego crearNuevoSoftwareJuego() {
    std::string nombre;
    std::string desarrollador;
    std::string clasificacionEdad;
    int precio;
    std::string genero;
    std::list<std::string> listaUsuarios = {};

    std::cout << "Ingrese el nombre del software de producción: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el nombre del desarrollador: ";
    std::getline(std::cin, desarrollador);

    std::cout << "Ingrese la clasificación de edad (E, 18+, etc.): ";
    std::cin >> clasificacionEdad;

    std::cout << "Ingrese el precio del software: ";
    std::cin >> precio;

    std::cout << "Ingrese el tipo de solución: ";
    std::cin.ignore();
    std::getline(std::cin, genero);

    // Crear una instancia de SoftwareProduccion con los datos ingresados
    return SoftwareJuego(nombre, desarrollador, clasificacionEdad, listaUsuarios,precio, genero);
}

SoftwareOfimatica crearNuevoSoftwareOfimatica() {
    std::string nombre;
    std::string desarrollador;
    std::string clasificacionEdad;
    int precio;
    int cantArchivos;
    std::list<std::string> listaUsuarios = {};

    std::cout << "Ingrese el nombre del software de producción: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el nombre del desarrollador: ";
    std::getline(std::cin, desarrollador);

    std::cout << "Ingrese la clasificación de edad (E, 18+, etc.): ";
    std::cin >> clasificacionEdad;

    std::cout << "Ingrese el precio del software: ";
    std::cin >> precio;

    std::cout << "Ingrese cantidad de archivos creados: ";
    std::cin >> cantArchivos;

    // Crear una instancia de SoftwareProduccion con los datos ingresados
    return SoftwareOfimatica(nombre, desarrollador, clasificacionEdad, listaUsuarios,precio, cantArchivos);
}

SoftwareSeguridad crearNuevoSoftwareSeguridad() {
    std::string nombre;
    std::string desarrollador;
    std::string clasificacionEdad;
    int precio;
    std::string tipoMalware;
    std::list<std::string> listaUsuarios = {};

    std::cout << "Ingrese el nombre del software de producción: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el nombre del desarrollador: ";
    std::getline(std::cin, desarrollador);

    std::cout << "Ingrese la clasificación de edad (E, 18+, etc.): ";
    std::cin >> clasificacionEdad;

    std::cout << "Ingrese el precio del software: ";
    std::cin >> precio;

    std::cout << "Ingrese cantidad de archivos creados: ";
    std::cin >> tipoMalware;

    // Crear una instancia de SoftwareProduccion con los datos ingresados
    return SoftwareSeguridad(nombre, desarrollador, clasificacionEdad, listaUsuarios,precio, tipoMalware);
}

SoftwareSocial crearNuevoSoftwareSocial() {
    std::string nombre;
    std::string desarrollador;
    std::string clasificacionEdad;
    int precio;
    int cantAmigos;
    std::list<std::string> listaUsuarios = {};

    std::cout << "Ingrese el nombre del software de producción: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el nombre del desarrollador: ";
    std::getline(std::cin, desarrollador);

    std::cout << "Ingrese la clasificación de edad (E, 18+, etc.): ";
    std::cin >> clasificacionEdad;

    std::cout << "Ingrese el precio del software: ";
    std::cin >> precio;

    std::cout << "Ingrese cantidad de archivos creados: ";
    std::cin >> cantAmigos;

    return SoftwareSocial(nombre, desarrollador, clasificacionEdad, listaUsuarios,precio, cantAmigos);
}

SoftwareNavegador crearNuevoSoftwareNavegador() {
    std::string nombre;
    std::string desarrollador;
    std::string clasificacionEdad;
    int precio;
    std::list<std::string> listaUsuarios = {};

    std::cout << "Ingrese el nombre del software de producción: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el nombre del desarrollador: ";
    std::getline(std::cin, desarrollador);

    std::cout << "Ingrese la clasificación de edad (E, 18+, etc.): ";
    std::cin >> clasificacionEdad;

    std::cout << "Ingrese el precio del software: ";
    std::cin >> precio;

    return SoftwareNavegador(nombre, desarrollador, clasificacionEdad, listaUsuarios,precio);
}

int main() {
    //Variables para el menu
    std::string opcion;
    bool salir = false;
    //Inicio sesion
    Usuario* usuarioLogueado = nullptr;
    bool salirPrograma = false;

    // Bilioteca que almacena Software
    std::vector<Software*> biblioteca;

    // Lista Generos juegos
    crearListaGenerosJuegos();

    //Crear Lista tipos software
    crearListaTiposSeguridad();

    /*POBLAR "BASE DATOS"*/

    //Usuarios
    std::vector<Usuario*> usuarios;
    crearUsuarios(usuarios);

    //Softwares
    std::vector<SoftwareJuego> Juegos = crearJuegos();
    std::vector<SoftwareProduccion> SProduccion = CrearSoftwareProduccion();
    std::vector<SoftwareOfimatica> SOfimatica = crearSoftwareOfimatica();
    std::vector<SoftwareNavegador> SNavegadores = crearSoftwareNavegador();
    std::vector<SoftwareSeguridad> SSeguridad = crearSoftwareSeguridad();
    std::vector<SoftwareSocial> SSocial = crearSoftwareSocial();

    //Agregar elementos a la biblioteca
    for (SoftwareProduccion& software : SProduccion) {
        biblioteca.push_back(&software);
    }

    for (SoftwareOfimatica& software : SOfimatica) {
        biblioteca.push_back(&software);
    }

    for (SoftwareProduccion& software : SProduccion) {
       biblioteca.push_back(&software);
    }

    for (SoftwareNavegador& software : SNavegadores) {
        biblioteca.push_back(&software);
    }

    for (SoftwareSeguridad& software : SSeguridad) {
        biblioteca.push_back(&software);
    }

    for (SoftwareSocial& software : SSocial) {
        biblioteca.push_back(&software);
    }

    // Acceder a los usuarios almacenados en el vector
    for (Usuario* usuario : usuarios) {
        std::cout << "Usuario: " << usuario->getNombreUsuario() << ", Contrasena: " << usuario->getContrasena()  << " " <<usuario->getEdad()  << std::endl;
    }

    /*MENU*/

    while (!salirPrograma) {
        // Inicio de sesión
        if (inicioSesion(usuarios, usuarioLogueado)) {
            std::cout << "Inicio de sesión correcto. Bienvenido, " << usuarioLogueado->getNombreUsuario() << "!" << std::endl;
            
            bool salir = false;

            while (!salir) {
                std::cout << "\n*** Menú ***\n";
                std::cout << "1. Agregar software a la biblioteca\n";
                std::cout << "2. Eliminar software a la biblioteca\n";
                std::cout << "3. Mostrar software por tipo\n";
                std::cout << "4. Logout\n";
                std::cout << "5. Salir del programa\n";
                std::cout << "Ingrese su opción: ";
                std::cin >> opcion;

                if (opcion == "1") {
                    std::string tipo;
                    std::cout << "Ingrese el tipo de software (Produccion, Ofimatica, Navegador, Seguridad, Social): ";
                    std::cin >> tipo;

                    if (tipo == "Produccion") {
                        // Agregar un software de producción a la biblioteca
                        SoftwareProduccion nuevoSoftware = crearNuevoSoftwareProduccion();
                        SProduccion.push_back(nuevoSoftware);
                        biblioteca.push_back(&nuevoSoftware);
                    } else if (tipo == "Ofimatica") {
                        // Agregar un software de ofimática a la biblioteca
                        SoftwareOfimatica nuevoSoftware = crearNuevoSoftwareOfimatica();
                        SOfimatica.push_back(nuevoSoftware);
                        biblioteca.push_back(&nuevoSoftware);
                    } else if (tipo == "Navegador") {
                        // Agregar un software de navegador a la biblioteca
                        SoftwareNavegador nuevoSoftware = crearNuevoSoftwareNavegador();
                        SNavegadores.push_back(nuevoSoftware);
                        biblioteca.push_back(&nuevoSoftware);
                    } else if (tipo == "Seguridad") {
                        // Agregar un software de seguridad a la biblioteca
                        SoftwareSeguridad nuevoSoftware = crearNuevoSoftwareSeguridad(); 
                        SSeguridad.push_back(nuevoSoftware);
                        biblioteca.push_back(&nuevoSoftware);
                    } else if (tipo == "Social") {
                        // Agregar un software social a la biblioteca
                        SoftwareSocial nuevoSoftware = crearNuevoSoftwareSocial(); 
                        SSocial.push_back(nuevoSoftware);
                        biblioteca.push_back(&nuevoSoftware);
                    } else {
                        std::cout << "Tipo de software no válido." << std::endl;
                    }
                } else if (opcion == "2") {
                    std::string nombreSoftware;
                std::cout << "Ingrese el nombre del software que desea eliminar: ";
                std::cin.ignore();
                std::getline(std::cin, nombreSoftware);

                bool softwareEncontrado = false; // Para rastrear si se encontró el software

                // Buscar el software por nombre y eliminarlo
                for (auto it = biblioteca.begin(); it != biblioteca.end(); ++it) {
                    if ((*it)->getNombre() == nombreSoftware) {
                        std::cout << "¿Está seguro de que desea eliminar el software '" << nombreSoftware << "'? (S/N): ";
                        char respuesta;
                        std::cin >> respuesta;
                        
                        if (respuesta == 'S' || respuesta == 's') {
                            delete *it; // Liberar la memoria del software que se eliminará
                            biblioteca.erase(it); // Eliminar el puntero del software de la biblioteca
                            std::cout << "El software ha sido eliminado de la biblioteca." << std::endl;
                        } else {
                            std::cout << "No se eliminó el software '" << nombreSoftware << "'." << std::endl;
                        }

                        softwareEncontrado = true;
                        break; // Salir del bucle una vez que se ha eliminado el software o confirmado la no eliminación
                    }
                }

                if (!softwareEncontrado) {
                    std::cout << "El software especificado no se encontró en la biblioteca." << std::endl;
                }
                } else if (opcion == "3") {
                    std::string tipo;
                    std::cout << "Ingrese el tipo de software (Produccion, Ofimatica, Navegador, Seguridad, Social): ";
                    std::cin >> tipo;

                    if (tipo == "Produccion") {
                        for (const SoftwareProduccion& software : SProduccion) {
                            std::cout << "Nombre: " << software.getNombre() << std::endl;
                        }
                    } else if (tipo == "Ofimatica") {
                        for (const SoftwareOfimatica& software : SOfimatica) {
                        std::cout << "Nombre: " << software.getNombre() << std::endl;
                        }
                    } else if (tipo == "Navegador") {
                        for (const SoftwareNavegador& software : SNavegadores) {
                        std::cout << "Nombre: " << software.getNombre() << std::endl;
                        }
                    } else if (tipo == "Seguridad") {
                        if (usuarioLogueado->tieneRol("Admin")) {
                            for (const SoftwareSeguridad& software : SSeguridad) {
                                std::cout << "Nombre: " << software.getNombre() << std::endl;
                            } 
                        }else{
                             std::cout << "No tienes permiso para ver este software3" << std::endl;
                        }
                        
                    } else if (tipo == "Social") {
                        for (const SoftwareSocial& software : SSocial) {
                        std::cout << "Nombre: " << software.getNombre() << std::endl;
                    }
                    
                } else {
                        std::cout << "Tipo de software no válido." << std::endl;
                }
                } else if (opcion == "4") {
                    char respuesta;
                do {
                     std::cout << "Logout exitoso. ¿Desea loguearse con otro usuario (S/N)? ";
                     std::cin >> respuesta;

                    if (respuesta == 'S' || respuesta == 's') {
                        salir = true; // Salir del bucle del menú
                        usuarioLogueado = nullptr; // Limpiar el usuario logueado
                    } else if (respuesta == 'N' || respuesta == 'n') {
                         salirPrograma = true;
                         salir = true;
                    } else {
                        std::cout << "Opción no válida. Intente de nuevo (S/N).\n";
                    }
                } while (respuesta != 'S' && respuesta != 's' && respuesta != 'N' && respuesta != 'n');
                } else if (opcion == "5") {
                    std::cout << "Saliendo del programa.\n";
                    salir = true; // Salir del bucle del menú
                    salirPrograma = true; // Salir del bucle principal y terminar el programa
                } else {
                    std::cout << "Opción no válida. Intente de nuevo.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
        } else {
            std::cout << "Inicio de sesión incorrecto. Verifique sus credenciales." << std::endl;
            salirPrograma = true; // Terminar el programa en caso de inicio de sesión incorrecto
        }
    }

    // Liberar la memoria de los usuarios creados
    for (Usuario* usuario : usuarios) {
        delete usuario;
    }
    
    return 0;
}
