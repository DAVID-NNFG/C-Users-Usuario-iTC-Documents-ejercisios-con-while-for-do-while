#include <stdio.h>


// Función para calcular el n-ésimo número triangular usando un bucle for
int calcularNumeroTriangular(int n) {
    int numeroTriangular = 0;
    for (int i = 1; i <= n; ++i) {
        numeroTriangular += i;
    }
    return numeroTriangular;
}

int main() {
    int n;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    // Verificar si n es válido (debe ser un número natural)
    if (n <= 0) {
        std::cout << "El valor de n debe ser un número natural positivo." << std::endl;
        return 1;
    }

    // Calcular el n-ésimo número triangular
    int numeroTriangular = calcularNumeroTriangular(n);
    
    // Mostrar el resultado
    std::cout << "El " << n << "-ésimo número triangular es: " << numeroTriangular << std::endl;

    return 0;
}



// Función para calcular el n-ésimo número triangular usando un bucle for
int calcularNumeroTriangular(int n) {
    int numeroTriangular = 0;
    while (int i = 1; i <= n; ++i) {
        numeroTriangular += i;
    }
    return numeroTriangular;
}

int main() {
    int n;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    // Verificar si n es válido (debe ser un número natural)
    if (n <= 0) {
        std::cout << "El valor de n debe ser un número natural positivo." << std::endl;
        return 1;
    }

    // Calcular el n-ésimo número triangular
    int numeroTriangular = calcularNumeroTriangular(n);
    
    // Mostrar el resultado
    std::cout << "El " << n << "-ésimo número triangular es: " << numeroTriangular << std::endl;

    return 0;
}






// Función para calcular el n-ésimo número triangular usando un bucle for
int calcularNumeroTriangular(int n) {
    int numeroTriangular = 0;
    do while  (int i = 1; i <= n; ++i) {
        numeroTriangular += i;
    }
    return numeroTriangular;
}

int main() {
    int n;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    // Verificar si n es válido (debe ser un número natural)
    if (n <= 0) {
        std::cout << "El valor de n debe ser un número natural positivo." << std::endl;
        return 1;
    }

    // Calcular el n-ésimo número triangular
    int numeroTriangular = calcularNumeroTriangular(n);
    
    // Mostrar el resultado
    std::cout << "El " << n << "-ésimo número triangular es: " << numeroTriangular << std::endl;

    return 0;
}
