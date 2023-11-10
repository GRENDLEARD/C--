#include <iostream>

int main() {
    // Declaración de variables
    int numero1, numero2, suma;

    // Solicitar al usuario que ingrese el primer número
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    // Solicitar al usuario que ingrese el segundo número
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Calcular la suma
    suma = numero1 + numero2;

    // Mostrar el resultado
    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << std::endl;

    return 0;
}
