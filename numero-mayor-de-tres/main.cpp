#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los tres números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Encontrar el número mayor
    int mayor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    }

    // Encontrar el número menor
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    // Mostrar el resultado al usuario
    cout << "El número mayor es: " << mayor << std::endl;
    cout << "El número menor es: " << menor << std::endl;

    return 0;
}