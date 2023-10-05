#pragma once
#include "Software.h"

class SoftwareOfimatica : public Software {
public:
    // Constructor
    SoftwareOfimatica(const std::string& nombre, const std::string& developer,
                      const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios, int precio,
                      int cantidadArchivos);

    // Getter y setter para cantidadArchivos
    int getCantidadArchivos() const;
    void setCantidadArchivos(int cantidadArchivos);


private:
    int cantidadArchivos;
};

// Implementación de los métodos inline

inline SoftwareOfimatica::SoftwareOfimatica(const std::string& nombre, const std::string& developer,
                                           const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                                           int precio, int cantidadArchivos)
    : Software(nombre, developer, clasificacionEdad, listaUsuarios, precio), cantidadArchivos(cantidadArchivos) {
    // Implementación del constructor de SoftwareOfimatica
}

inline int SoftwareOfimatica::getCantidadArchivos() const {
    return cantidadArchivos;
}

inline void SoftwareOfimatica::setCantidadArchivos(int cantidadArchivos) {
    this->cantidadArchivos = cantidadArchivos;
}


