#include <stdio.h> 


// Función para calcular la suma de los cubos de los primeros n números
int sumaCubos(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i * i * i; // Agregar el cubo del número actual a la suma
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

    // Calcular la suma de los cubos de los primeros n números
    int resultado = sumaCubos(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los cubos de los primeros " << n << " números es: " << resultado << std::endl;

    return 0;
}


// Función para calcular la suma de los cubos de los primeros n números
int sumaCubos(int n) {
    int suma = 0;
    int i = 1;
    // Usar un bucle while para sumar los cubos de los primeros n números
    while (i <= n) {
        suma += i * i * i; // Agregar el cubo del número actual a la suma
        i++; // Incrementar el contador
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

    // Calcular la suma de los cubos de los primeros n números
    int resultado = sumaCubos(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los cubos de los primeros " << n << " números es: " << resultado << std::endl;

    return 0;
}


// Función para calcular la suma de los cubos de los primeros n números
int sumaCubos(int n) {
    int suma = 0;
    int i = 1; // Inicializamos el contador en 1
    
    // Usar un bucle do-while para sumar los cubos de los primeros n números
    do {
        suma += i * i * i; // Agregar el cubo del número actual a la suma
        i++; // Incrementar el contador
    } while (i <= n); // Continuar hasta que el contador alcance o supere n
    
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

    // Calcular la suma de los cubos de los primeros n números
    int resultado = sumaCubos(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los cubos de los primeros " << n << " números es: " << resultado << std::endl;

    return 0;
}