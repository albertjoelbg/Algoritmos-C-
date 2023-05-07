/*
 *  /\  |  _   _  ._ o _|_ ._ _   _   _
 * /--\ | (_| (_) |  |  |_ | | | (_) _>
 *         _|
 */

#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int numero1;
    int numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 == numero2)
    {
        cout << "Los números son iguales";
    }
    else
    {
        if (numero1 > numero2)
        {
            cout << "El número mayor es: " << numero1;
        }
        else
        {
            cout << "El numero mayor es: " << numero2;
        }
    }

    return 0;
}
