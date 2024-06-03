#include <stdio.h>

// Función para calcular el producto de una serie geométrica
double calcularProductoSerieGeometrica(double a, double r, int n) {
    double producto = 1.0; // Inicializar el producto en 1

    // Calcular el producto de la serie usando un bucle for
    for (int i = 0; i < n; ++i) {
        producto *= a; // Multiplicar por el término actual de la serie
    }

    return producto;
}

int main() {
    double a, r;
    int n;

    std::cout << "Ingrese el primer término de la serie (a): ";
    std::cin >> a;

    std::cout << "Ingrese la razón común de la serie (r): ";
    std::cin >> r;

    std::cout << "Ingrese el número de términos en la serie (n): ";
    std::cin >> n;

    // Calcular el producto de la serie geométrica
    double producto = calcularProductoSerieGeometrica(a, r, n);

    // Mostrar el resultado
    std::cout << "El producto de la serie geométrica es: " << producto << std::endl;

    return 0;
}



// Función para calcular el producto de una serie geométrica
double calcularProductoSerieGeometrica(double a, double r, int n) {
    double producto = 1.0; // Inicializar el producto en 1
    int contador = 0; // Inicializar el contador

    // Calcular el producto de la serie usando un bucle while
    while (contador < n) {
        producto *= a; // Multiplicar por el término actual de la serie
        contador++; // Incrementar el contador
    }

    return producto;
}

int main() {
    double a, r;
    int n;

    std::cout << "Ingrese el primer término de la serie (a): ";
    std::cin >> a;

    std::cout << "Ingrese la razón común de la serie (r): ";
    std::cin >> r;

    std::cout << "Ingrese el número de términos en la serie (n): ";
    std::cin >> n;

    // Calcular el producto de la serie geométrica
    double producto = calcularProductoSerieGeometrica(a, r, n);

    // Mostrar el resultado
    std::cout << "El producto de la serie geométrica es: " << producto << std::endl;

    return 0;
}


// Función para calcular el producto de una serie geométrica
double calcularProductoSerieGeometrica(double a, double r, int n) {
    double producto = 1.0; // Inicializar el producto en 1
    int contador = 0; // Inicializar el contador

    // Calcular el producto de la serie usando un bucle do-while
    do {
        producto *= a; // Multiplicar por el término actual de la serie
        contador++; // Incrementar el contador
    } while (contador < n);

    return producto;
}

int main() {
    double a, r;
    int n;

    std::cout << "Ingrese el primer término de la serie (a): ";
    std::cin >> a;

    std::cout << "Ingrese la razón común de la serie (r): ";
    std::cin >> r;

    std::cout << "Ingrese el número de términos en la serie (n): ";
    std::cin >> n;

    // Calcular el producto de la serie geométrica
    double producto = calcularProductoSerieGeometrica(a, r, n);

    // Mostrar el resultado
    std::cout << "El producto de la serie geométrica es: " << producto << std::endl;

    return 0;
}