#pragma once
#include <iostream>
#include <list>
#include "Software.h"

class SoftwareProduccion : public Software {
public:
    // Constructor de SoftwareProduccion
    SoftwareProduccion(const std::string& nombre, const std::string& developer,
                       const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                       int precio, const std::string& tipoSolucion);

    // Getter para el tipo de solución
    std::string getTipoSolucion() const;

    // Setter para el tipo de solución
    void setTipoSolucion(const std::string& nuevoTipoSolucion);

private:
    std::string tipoSolucion;  // Nuevo atributo específico para SoftwareProduccion
};

// Implementación de los métodos inline

inline SoftwareProduccion::SoftwareProduccion(const std::string& nombre, const std::string& developer,
                                              const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                                              int precio, const std::string& tipoSolucion)
    : Software(nombre, developer, clasificacionEdad, listaUsuarios, precio), tipoSolucion(tipoSolucion) {
    // Implementación del constructor de SoftwareProduccion
}

inline std::string SoftwareProduccion::getTipoSolucion() const {
    return tipoSolucion;
}

inline void SoftwareProduccion::setTipoSolucion(const std::string& nuevoTipoSolucion) {
    tipoSolucion = nuevoTipoSolucion;
}
