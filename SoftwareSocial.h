#pragma once
#include "Software.h"

class SoftwareSocial : public Software {
public:
    // Constructor
    SoftwareSocial(const std::string& nombre, const std::string& developer,
                  const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios, int precio,
                  int cantidadAmigos);

    // Getter y setter para cantidadAmigos
    int getCantidadAmigos() const;
    void setCantidadAmigos(int cantidadAmigos);


private:
    int cantidadAmigos;
};

// Implementación de los métodos inline

inline SoftwareSocial::SoftwareSocial(const std::string& nombre, const std::string& developer,
                                     const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                                     int precio, int cantidadAmigos)
    : Software(nombre, developer, clasificacionEdad, listaUsuarios, precio), cantidadAmigos(cantidadAmigos) {
    // Implementación del constructor de SoftwareSocial
}

inline int SoftwareSocial::getCantidadAmigos() const {
    return cantidadAmigos;
}

inline void SoftwareSocial::setCantidadAmigos(int cantidadAmigos) {
    this->cantidadAmigos = cantidadAmigos;
}


