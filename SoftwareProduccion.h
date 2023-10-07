#pragma once
#include "Software.h"
#include <deque>
#include <string>

class SoftwareNavegador : public Software {
public:
    // Constructor
    SoftwareNavegador(const std::string& nombre, const std::string& developer,
                      const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios, int precio);

    // Getter para el historial
    std::deque<std::string> getHistorial() const;

    // Método para agregar una página al historial
    void agregarPaginaAlHistorial(const std::string& pagina);
private:
    std::deque<std::string> historial;
};

// Implementación de los métodos inline

inline SoftwareNavegador::SoftwareNavegador(const std::string& nombre, const std::string& developer,
                                           const std::string& clasificacionEdad, const std::list<std::string>& listaUsuarios,
                                           int precio)
    : Software(nombre, developer, clasificacionEdad, listaUsuarios, precio) {
    // Implementación del constructor de SoftwareNavegador
}

inline std::deque<std::string> SoftwareNavegador::getHistorial() const {
    return historial;
}

inline void SoftwareNavegador::agregarPaginaAlHistorial(const std::string& pagina) {
    // Agrega la página al principio del historial
    historial.push_front(pagina);

    // Si el historial supera las 10 páginas, elimina la página más antigua
    if (historial.size() > 10) {
        historial.pop_back();
    }
}

