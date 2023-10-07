#pragma once
#include "Software.h"
#include <string>

class SoftwareSeguridad : public Software {
public:
    // Constructor
    SoftwareSeguridad(const std::string& nombre, const std::string& developer,
                      const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                      int precio, const std::string& tipoMalware);

    // Getter para el tipo de malware
    std::string getTipoMalware() const;

    // Setter para el tipo de malware
    void setTipoMalware(const std::string& tipoMalware);


private:
    std::string tipoMalware;
};

// Implementación de los métodos inline

inline SoftwareSeguridad::SoftwareSeguridad(const std::string& nombre, const std::string& developer,
                                           const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                                           int precio, const std::string& tipoMalware)
    : Software(nombre, developer, clasificacionEdad, listaUsuarios, precio), tipoMalware(tipoMalware) {
    // Implementación del constructor de SoftwareSeguridad
}

inline std::string SoftwareSeguridad::getTipoMalware() const {
    return tipoMalware;
}

inline void SoftwareSeguridad::setTipoMalware(const std::string& tipo) {
    tipoMalware = tipo;
}


