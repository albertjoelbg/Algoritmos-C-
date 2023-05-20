#include <iostream>

using namespace std;

int main() {
    int n;
    int s = 0;
    int inf, sup;
    cout << "--- PROGRAMA DE SUMATORIA IMPARES ---" << endl;
    cout << "Ingrese límites" << endl;
    cin >> inf;
    cin >> sup;
    if (inf % 2 == 0) {
        inf = inf + 1;
    }
    if (sup % 2 == 0) {
        sup = sup - 1;
    }
    n = inf - 2;
    do {
        n = n + 2;
        s = s + n;
    } while (n < sup);

    cout << "La suma es: " << s;
    return 0;
}


