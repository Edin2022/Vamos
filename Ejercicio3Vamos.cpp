
#include <iostream>
using namespace std;


int main() {
    int num;

    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;

    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}