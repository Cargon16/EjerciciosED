﻿// Nombre del alumno .....
// Usuario del Juez ......


#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>

int calcularAltura() {
    int hijos;
    std::cin >> hijos;
    if (hijos == 0) return 1;
    else {
        int maximo = 1;
        for (int i = 0; i < hijos; ++i) {
            maximo = std::max(calcularAltura(), maximo);
        }
        return maximo +1;
    }
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    // leer los datos de la entrada
    
    std::cout << calcularAltura() << std::endl;

}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();


    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}