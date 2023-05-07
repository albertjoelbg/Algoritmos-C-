#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int metros = 0, decimetros = 0, centimetros = 0, milimetros = 0;
    cout << "--- ALGORITMO DE CONVERSIÓN DE METROS A OTRAS UNIDADES ---" << endl;
    cout << "Ingrese medida en milímetros: ";
    cin >> milimetros;
    metros = milimetros / 1000;
    milimetros = milimetros % 1000;

    if (milimetros != 0)
    {
        decimetros = milimetros / 100;
        milimetros = milimetros % 100;
    }

    if (milimetros != 0)
    {
        centimetros = milimetros / 10;
        milimetros = milimetros % 10;
    }

    cout << "Conversión: ";
    cout << metros << "m " << decimetros << "dm " << centimetros << "cm " << milimetros << "mm " << endl;
    return 0;
}
