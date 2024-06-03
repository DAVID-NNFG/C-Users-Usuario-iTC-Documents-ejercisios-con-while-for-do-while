#include <studio.h>

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Función para calcular la suma de los factoriales de los primeros n números
unsigned long long sumaFactoriales(int n) {
    unsigned long long suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += factorial(i);
    }
    return suma;
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

    // Calcular la suma de los factoriales de los primeros n números
    unsigned long long resultado = sumaFactoriales(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los factoriales de los primeros " << n << " números es: " << resultado << std::endl;

    return 0;
}




// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    while  (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Función para calcular la suma de los factoriales de los primeros n números
unsigned long long sumaFactoriales(int n) {
    unsigned long long suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += factorial(i);
    }
    return suma;
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

    // Calcular la suma de los factoriales de los primeros n números
    unsigned long long resultado = sumaFactoriales(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los factoriales de los primeros " << n << " números es: " << resultado << std::endl;

    return 0;
}



// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Función para calcular la suma de los factoriales de los primeros n números
unsigned long long sumaFactoriales(int n) {
    unsigned long long suma = 0;
    int i = 1;
    do {
        suma += factorial(i);
        i++;
    } while (i <= n);
    return suma;
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

    // Calcular la suma de los factoriales de los primeros n números
    unsigned long long resultado = sumaFactoriales(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los factoriales de los primeros " << n << " números es: " << resultado << std::endl;

    return 0;
}