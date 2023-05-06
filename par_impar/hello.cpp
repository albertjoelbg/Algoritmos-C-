/*
 *  /\  |  _   _  ._ o _|_ ._ _   _   _
 * /--\ | (_| (_) |  |  |_ | | | (_) _>
 *         _|
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string pausa;
    int n1;
    string r;
    cout << "Ingrese numero: ";
    cin >> n1;
    if (n1 % 2 == 0)
    {
        r = "par";
    }
    else
    {
        r = "impar";
    }

    cout << "El numero es " << r;

    return 0;
}
