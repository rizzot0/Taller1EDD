#pragma once
#include <iostream>
#include "Usuario.h"

class UsuarioNormal : public Usuario {
public:
    UsuarioNormal(const std::string& nombreUsuario, const std::string& contrasena, int edad,
                  const std::string& correo);

    // Getter para el correo
    std::string getCorreo() const;

    // Setter para el correo
    void setCorreo(const std::string& nuevoCorreo);

private:
    std::string correo;
};

// Implementación de los métodos inline

inline UsuarioNormal::UsuarioNormal(const std::string& nombreUsuario, const std::string& contrasena, int edad,
                                    const std::string& correo)
    : Usuario(nombreUsuario, contrasena, edad), correo(correo) {
    // Implementación del constructor de UsuarioNormal
}

inline std::string UsuarioNormal::getCorreo() const {
    return correo;
}

inline void UsuarioNormal::setCorreo(const std::string& nuevoCorreo) {
    correo = nuevoCorreo;
}
