#pragma once
#include <iostream>
#include <list>

class Software {
public:
    // Constructor
    Software(const std::string& nombre, const std::string& developer,
            const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios, int precio);

    // Getters y setters
    std::string getNombre() const;
    void setNombre(const std::string& nombre);

    std::string getDeveloper() const;
    void setDeveloper(const std::string& developer);

    std::string getClasificacionEdad() const;
    void setClasificacionEdad(const std::string& clasificacionEdad);

    std::list<std::string> getListaUsuarios() const;
    void setListaUsuarios(const std::list<std::string>& listaUsuarios);

    int getPrecio() const;
    void setPrecio(int precio);


private:
    std::string nombre;
    std::string developer;
    std::string clasificacionEdad;
    std::list<std::string> listaUsuarios;
    int precio;
};

// Implementación de los métodos inline

inline Software::Software(const std::string& nombre, const std::string& developer,
                         const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios, int precio)
    : nombre(nombre), developer(developer), clasificacionEdad(clasificacionEdad),
      listaUsuarios(listaUsuarios), precio(precio) {
    // Implementación del constructor de Software
}

inline std::string Software::getNombre() const {
    return nombre;
}

inline void Software::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

inline std::string Software::getDeveloper() const {
    return developer;
}

std::string Software::getClasificacionEdad() const {
    return clasificacionEdad;
}

