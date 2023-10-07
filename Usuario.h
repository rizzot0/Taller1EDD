#pragma once
#include <iostream>
#include <vector> 

class Usuario {
public:
    Usuario(const std::string& nombreUsuario, const std::string& contrasena, int edad);

    // Getter y Setter para el nombre de usuario
    std::string getNombreUsuario() const;
    void setNombreUsuario(const std::string& nuevoNombreUsuario);

    // Getter y Setter para la contraseña
    std::string getContrasena() const;
    void setContrasena(const std::string& nuevaContrasena);

    // Getter y Setter para la edad
    int getEdad() const;
    void setEdad(int nuevaEdad);

    // Método para agregar un rol al usuario
    void agregarRol(const std::string& rol) {
        roles.push_back(rol);
    }

    // Método para verificar si el usuario tiene un rol específico
    bool tieneRol(const std::string& rol) const {
        for (const std::string& usuarioRol : roles) {
            if (usuarioRol == rol) {
                return true;
            }
        }
        return false;
    }

private: 
    std::string nombreUsuario;
    std::string contrasena;
    int edad;
    std::vector<std::string> roles; // Vector para almacenar los roles
};


inline Usuario::Usuario(const std::string& nombreUsuario, const std::string& contrasena, int edad)
    : nombreUsuario(nombreUsuario), contrasena(contrasena), edad(edad) {
}

inline std::string Usuario::getNombreUsuario() const {
    return nombreUsuario;
}

inline void Usuario::setNombreUsuario(const std::string& nuevoNombreUsuario) {
    nombreUsuario = nuevoNombreUsuario;
}

inline std::string Usuario::getContrasena() const {
    return contrasena;
}

inline void Usuario::setContrasena(const std::string& nuevaContrasena) {
    contrasena = nuevaContrasena;
}

inline int Usuario::getEdad() const {
    return edad;
}

inline void Usuario::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}
