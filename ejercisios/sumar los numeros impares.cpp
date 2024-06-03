#include <studio.h>

// Función para sumar los números impares hasta n
int sumarImpares(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i += 2) { // Comenzando desde 1, sumar de 2 en 2 para obtener números impares
        suma += i;
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

    // Calcular la suma de los números impares hasta n
    int resultado = sumarImpares(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los números impares hasta " << n << " es: " << resultado << std::endl;

    return 0;
}



// Función para sumar los números impares hasta n
int sumarImpares(int n) {
    int suma = 0;
    int numeroImpar = 1; // Comenzamos con el primer número impar, que es 1

    // Usar un bucle while para sumar los números impares hasta n
    while (numeroImpar <= n) {
        suma += numeroImpar; // Sumar el número impar actual a la suma
        numeroImpar += 2; // Incrementar al siguiente número impar
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

    // Calcular la suma de los números impares hasta n
    int resultado = sumarImpares(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los números impares hasta " << n << " es: " << resultado << std::endl;

    return 0;
}




// Función para sumar los números impares hasta n
int sumarImpares(int n) {
    int suma = 0;
    int numeroImpar = 1; // Comenzamos con el primer número impar, que es 1

    // Usar un bucle do-while para sumar los números impares hasta n
    do {
        suma += numeroImpar; // Sumar el número impar actual a la suma
        numeroImpar += 2; // Incrementar al siguiente número impar
    } while (numeroImpar <= n);

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

    // Calcular la suma de los números impares hasta n
    int resultado = sumarImpares(n);
    
    // Mostrar el resultado
    std::cout << "La suma de los números impares hasta " << n << " es: " << resultado << std::endl;

    return 0;
}