#pragma once
#include <iostream>
#include "Usuario.h"

class Administrador : public Usuario {
public:
    Administrador(const std::string& nombreUsuario, const std::string& contrasena, int edad,
                  const std::string& correo, bool accedeLog);

    // Getter para el correo
    std::string getCorreo() const;

    // Setter para el correo
    void setCorreo(const std::string& nuevoCorreo);

    // Getter para accedeLog
    bool getAccedeLog() const;

    // Setter para accedeLog
    void setAccedeLog(bool nuevoAccedeLog);

private:
    std::string correo;
    bool accedeLog;
};

// Implementación de los métodos inline

inline Administrador::Administrador(const std::string& nombreUsuario, const std::string& contrasena, int edad,
                                    const std::string& correo, bool accedeLog)
    : Usuario(nombreUsuario, contrasena, edad), correo(correo), accedeLog(accedeLog) {
    // Implementación del constructor de Administrador
}

inline std::string Administrador::getCorreo() const {
    return correo;
}

inline void Administrador::setCorreo(const std::string& nuevoCorreo) {
    correo = nuevoCorreo;
}

inline bool Administrador::getAccedeLog() const {
    return accedeLog;
}

inline void Administrador::setAccedeLog(bool nuevoAccedeLog) {
    accedeLog = nuevoAccedeLog;
}
