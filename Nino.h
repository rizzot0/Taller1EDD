#pragma once
#include <iostream>
#include "Usuario.h"

class Nino : public Usuario {
public:
    Nino(const std::string& nombreUsuario, const std::string& contrasena, int edad);
};

// Implementación del constructor inline

inline Nino::Nino(const std::string& nombreUsuario, const std::string& contrasena, int edad)
    : Usuario(nombreUsuario, contrasena, edad) {
    // Implementación del constructor de Niño
}
