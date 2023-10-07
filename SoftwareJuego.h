#pragma once
#include <iostream>
#include <list>
#include "Software.h"

class SoftwareJuego : public Software {
public:
    // Constructor de SoftwareJuego
    SoftwareJuego(const std::string& nombre, const std::string& developer,
                  const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios, int precio,
                  const std::string& genero);

    // Getter para el género
    std::string getGenero() const;

    // Setter para el género
    void setGenero(const std::string& nuevoGenero);

private:
    std::string genero;  // Nuevo atributo específico para SoftwareJuego
};

// Implementación de los métodos inline

inline SoftwareJuego::SoftwareJuego(const std::string& nombre, const std::string& developer,
                                    const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                                    int precio, const std::string& genero)
    : Software(nombre, developer, clasificacionEdad, listaUsuarios, precio), genero(genero) {
    // Implementación del constructor de SoftwareJuego
}

inline std::string SoftwareJuego::getGenero() const {
    return genero;
}

inline void SoftwareJuego::setGenero(const std::string& nuevoGenero) {
    genero = nuevoGenero;
}
