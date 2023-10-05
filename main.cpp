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

//Funcion poblar Usuarios
void crearUsuarios(std::vector<Usuario*>& usuarios) {
    // Crear y agregar un administrador
    Administrador* admin = new Administrador("admin", "adminpass", 30, "admin@example.com", true);
    usuarios.push_back(admin);

    // Crear y agregar usuarios normales
    for (int i = 0; i < 10; i++) {
        std::string username = "usuario" + std::to_string(i);
        std::string password = "contrasena" + std::to_string(i);
        std::string correo = username + "@example.com";
        UsuarioNormal* usuarioNormal = new UsuarioNormal(username, password, 25 + i, correo);
        usuarios.push_back(usuarioNormal);
    }

    // Crear y agregar niños
    for (int i = 0; i < 4; i++) {
        std::string username = "nino" + std::to_string(i);
        std::string password = "contrasenaNino" + std::to_string(i);
        Nino* nino = new Nino(username, password, 10 + i);
        usuarios.push_back(nino);
    }
}

//Funcion Poblar Juegos
std::vector<SoftwareJuego> crearJuegos() {
    std::vector<SoftwareJuego> juegos;

    // Agregar juegos a la base de datos
    juegos.push_back(SoftwareJuego("Juego1", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 49, "Acción"));
    juegos.push_back(SoftwareJuego("Juego2", "Desarrollador2", "E", {"Usuario1", "Usuario3"}, 59, "Aventura"));
    juegos.push_back(SoftwareJuego("Juego3", "Desarrollador3", "E", {"Usuario2", "Usuario4"}, 39, "Deportes"));
    juegos.push_back(SoftwareJuego("Juego4", "Desarrollador4", "E", {"Usuario3", "Usuario5"}, 69, "Acción"));
    juegos.push_back(SoftwareJuego("Juego5", "Desarrollador5", "E", {"Usuario4", "Usuario6"}, 79, "Aventura"));
    juegos.push_back(SoftwareJuego("Juego6", "Desarrollador6", "18+", {"Usuario5", "Usuario7"}, 89, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego7", "Desarrollador7", "18+", {"Usuario6", "Usuario8"}, 99, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego8", "Desarrollador8", "18+", {"Usuario7", "Usuario9"}, 79, "RPG"));
    juegos.push_back(SoftwareJuego("Juego9", "Desarrollador9", "18+", {"Usuario8", "Usuario10"}, 59, "RPG"));
    juegos.push_back(SoftwareJuego("Juego10", "Desarrollador10", "18+", {"Usuario9", "Usuario10"}, 69, "Deportes"));
    juegos.push_back(SoftwareJuego("Juego11", "Desarrollador11", "E", {"Usuario11", "Usuario12"}, 49, "Acción"));
    juegos.push_back(SoftwareJuego("Juego12", "Desarrollador12", "E", {"Usuario11", "Usuario13"}, 59, "Aventura"));
    juegos.push_back(SoftwareJuego("Juego13", "Desarrollador13", "E", {"Usuario12", "Usuario14"}, 39, "Deportes"));
    juegos.push_back(SoftwareJuego("Juego14", "Desarrollador14", "E", {"Usuario13", "Usuario15"}, 69, "Acción"));
    juegos.push_back(SoftwareJuego("Juego15", "Desarrollador15", "E", {"Usuario14", "Usuario16"}, 79, "Aventura"));
    juegos.push_back(SoftwareJuego("Juego16", "Desarrollador16", "18+", {"Usuario15", "Usuario17"}, 89, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego17", "Desarrollador17", "18+", {"Usuario16", "Usuario18"}, 99, "Shooter"));
    juegos.push_back(SoftwareJuego("Juego18", "Desarrollador18", "18+", {"Usuario17", "Usuario19"}, 79, "RPG"));
    juegos.push_back(SoftwareJuego("Juego19", "Desarrollador19", "18+", {"Usuario18", "Usuario20"}, 59, "RPG"));
    juegos.push_back(SoftwareJuego("Juego20", "Desarrollador20", "18+", {"Usuario19", "Usuario20"}, 69, "Deportes"));

    return juegos;
}

//Poblar SoftwareOfimatica
std::vector<SoftwareOfimatica> crearSoftwareOfimatica() {
    std::vector<SoftwareOfimatica> softwareOfimaticaContainer;

    // Datos comunes para las instancias
    std::string nombreBase = "SoftwareOfimatica";
    std::string developerBase = "Empresa ABC";
    std::string clasificacionEdadBase = "E";
    std::list<std::string> listaUsuariosBase = {"Usuario1", "Usuario2", "Usuario3"};
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
    
    softwareProduccion.push_back(SoftwareProduccion("Software1", "Desarrollador1", "E", {"usuario1", "usuario2"}, 99, "Solución1"));
    softwareProduccion.push_back(SoftwareProduccion("Software2", "Desarrollador2", "E", {"usuario2", "usuario3"}, 89, "Solución2"));
    softwareProduccion.push_back(SoftwareProduccion("Software3", "Desarrollador3", "E", {"usuario3", "usuario4"}, 79, "Solución3"));
    softwareProduccion.push_back(SoftwareProduccion("Software4", "Desarrollador4", "E", {"usuario4", "usuario5"}, 69, "Solución4"));

    return softwareProduccion;
}

//Poblas Software Produccion
std::vector<SoftwareProduccion> crearSoftwareProduccion() {
    std::vector<SoftwareProduccion> softwareProduccionContainer;

    // Datos comunes para las instancias
    std::string nombreBase = "SoftwareProduccion";
    std::string developerBase = "Empresa XYZ";
    std::string clasificacionEdadBase = "18+";
    std::list<std::string> listaUsuariosBase = {"Usuario1", "Usuario2", "Usuario3"};
    int precioBase = 99;
    std::string tipoSolucionBase = "SolucionX";

    for (int i = 1; i <= 5; i++) {
        // Generar nombres únicos para cada instancia
        std::string nombre = nombreBase + std::to_string(i);

        // Crear una instancia de SoftwareProduccion y agregarla al contenedor
        SoftwareProduccion produccion(nombre, developerBase, clasificacionEdadBase, listaUsuariosBase, precioBase, tipoSolucionBase);
        softwareProduccionContainer.push_back(produccion);
    }

    return softwareProduccionContainer;
}

//Poblar SoftwareNavegador
std::vector<SoftwareNavegador> crearSoftwareNavegador() {
    std::vector<SoftwareNavegador> navegadores;

    // Crear instancias de SoftwareNavegador y agregarlas al vector
    SoftwareNavegador navegador1("Navegador1", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 0);
    SoftwareNavegador navegador2("Navegador2", "Desarrollador2", "E", {"Usuario3", "Usuario4"}, 0);

    // Agregar páginas al historial de navegador1
    navegador1.agregarPaginaAlHistorial("www.pagina1.com");
    navegador1.agregarPaginaAlHistorial("www.pagina2.com");
    navegador1.agregarPaginaAlHistorial("www.pagina3.com");

    // Agregar páginas al historial de navegador2
    navegador2.agregarPaginaAlHistorial("www.ejemplo1.com");
    navegador2.agregarPaginaAlHistorial("www.ejemplo2.com");
    navegador2.agregarPaginaAlHistorial("www.ejemplo3.com");

    // Agregar los navegadores al vector
    navegadores.push_back(navegador1);
    navegadores.push_back(navegador2);

    return navegadores;
}

//Poblar SoftwareSeguridad
std::vector<SoftwareSeguridad> crearSoftwareSeguridad() {
    std::vector<SoftwareSeguridad> softwareSeguridad;

    // Crear instancias de SoftwareSeguridad con objetos std::string para los argumentos
    SoftwareSeguridad antivirus("Ransomware", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 0, "Tipo1");
    SoftwareSeguridad firewall("Spyware", "Desarrollador2", "E", {"Usuario3", "Usuario4"}, 0, "Tipo2");
    SoftwareSeguridad antimalware("Botnets", "Desarrollador3", "E", {"Usuario5", "Usuario6"}, 0, "Tipo3");
    SoftwareSeguridad cifrado("Rootkits", "Desarrollador4", "E", {"Usuario7", "Usuario8"}, 0, "Tipo4");
    SoftwareSeguridad seguridadWeb("Gusanos", "Desarrollador5", "E", {"Usuario9", "Usuario10"}, 0, "Tipo5");
    SoftwareSeguridad controlParental("Troyanos", "Desarrollador6", "E", {"Usuario11", "Usuario12"}, 0, "Tipo6");

    // Agregar las instancias al vector
    softwareSeguridad.push_back(antivirus);
    softwareSeguridad.push_back(firewall);
    softwareSeguridad.push_back(antimalware);
    softwareSeguridad.push_back(cifrado);
    softwareSeguridad.push_back(seguridadWeb);
    softwareSeguridad.push_back(controlParental);

    return softwareSeguridad;
}

//Poblar SoftwareSocial
std::vector<SoftwareSocial> crearSoftwareSocial() {
    std::vector<SoftwareSocial> softwareSocial;

    // Crear una instancia de software social con clasificación de edad "E"
    SoftwareSocial social1("Red Social 1", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 0, 100);

    // Crear una instancia de software social con clasificación de edad "18+"
    SoftwareSocial social2("Red Social 2", "Desarrollador2", "18+", {"Usuario3", "Usuario4"}, 0, 200);

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



int main() {
    // Crear un vector para almacenar punteros a objetos de la clase Software
    std::vector<Software*> softwareList;

    // Crear objetos de diferentes tipos (subclases) de Software y agregar punteros al vector
    SoftwareProduccion softwareProduccion("Software1", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 99, "Solución1");
    SoftwareOfimatica softwareOfimatica("Software2", "Desarrollador2", "E", {"Usuario3", "Usuario4"}, 49, 100);
    SoftwareNavegador softwareNavegador("Navegador1", "Desarrollador1", "E", {"Usuario1", "Usuario2"}, 0);

    softwareList.push_back(&softwareProduccion);
    softwareList.push_back(&softwareOfimatica);
    softwareList.push_back(&softwareNavegador);

// Acceder a los elementos dentro del vector softwareList usando un bucle range-based
//for (const Software* software : softwareList) {
//    std::cout << "Nombre: " << software->getNombre() << std::endl;
//    std::cout << "Developer: " << software->getDeveloper() << std::endl;
//    std::cout << "Clasificación de Edad: " << software->getClasificacionEdad() << std::endl;

    // Puedes continuar accediendo a otros atributos específicos de las subclases si es necesario
}
    
    //Variables para el menu
    std::string opcion;
    bool salir = false;
    
    // Lista Generos juegos
    crearListaGenerosJuegos();
    
    // Crear y llenar Usuarios
    std::vector<Usuario*> usuarios;
    crearUsuarios(usuarios);

    /*POBLAR "BASE DATOS"*/

    //Juegos
    std::vector<SoftwareJuego> Juegos = crearJuegos();

    //Softwares
    std::vector<SoftwareProduccion> SProduccion = CrearSoftwareProduccion();
    std::vector<SoftwareOfimatica> softwareOfimaticaInstances = crearSoftwareOfimatica();
    std::vector<SoftwareProduccion> softwareProduccionInstances = crearSoftwareProduccion();
    std::vector<SoftwareNavegador> navegadores = crearSoftwareNavegador();
    std::vector<SoftwareSeguridad> seguridad = crearSoftwareSeguridad();
    std::vector<SoftwareSocial> softwareSocial = crearSoftwareSocial();

    // Acceder a los usuarios almacenados en el vector
    //for (Usuario* usuario : usuarios) {
    //    std::cout << "Usuario: " << usuario->getNombreUsuario() << ", Contrasena: " << usuario->getContrasena() << std::endl;
    //}

    //Inicio sesion
    Usuario* usuarioLogueado = nullptr;
    bool salirPrograma = false;

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
                    // Agregar software a la biblioteca
                } else if (opcion == "2") {
                    // Eliminar software a la biblioteca
                } else if (opcion == "3") {
                    // Mostrar software por tipo
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
