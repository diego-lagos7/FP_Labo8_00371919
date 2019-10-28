#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int array1[8], array2[8];

    for (int indice = 0; indice < 8; indice ++) {
        cout << "Ingrese digito: ";
        cin >> array1[indice];
        cout << endl;
    }

    for (int indice = 7; indice >= 0; indice --) {
        array2[7 - indice] = array1[indice];
    }

    cout << "arreglo 1: " << endl;
    for (int indice = 0; indice < 8; indice ++) {
        cout << array1[indice] << endl;
    }

    cout << "arreglo 2: " << endl;
    for (int indice = 0; indice < 8; indice ++) {
        cout << array2[indice] << endl;
    }

    return 0;
}
