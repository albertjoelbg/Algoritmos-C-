#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    string triangulo;

    cout << "--- ALGORITMO DEL TRIÁNGULO ---" << endl;
    cout << "Ingrese lado a: ";
    cin >> a;
    cout << "Ingrese lado b: ";
    cin >> b;
    cout << "Ingrese lado c: ";
    cin >> c;

    if (abs(b - c) < a && a < (b + c)) // Existencia del triángulo
    {
        if (a == b && b == c)
        {
            triangulo = "equilátero";
        }
        else
        {

            if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            {
                triangulo = "isósceles";
            }
            else
            {
                triangulo = "escaleno";
            }
        }

        cout << "El triángulo es: " << triangulo;
    }
    else
    {
        cout << "El triángulo no existe";
    }

    return 0;
}
