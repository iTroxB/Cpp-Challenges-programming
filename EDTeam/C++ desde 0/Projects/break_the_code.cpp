#include <iostream>
#include <cstdlib> // Librería estandar de C. Permite entre otras cosas, generar números aleatorios
using namespace std;

void init(int& s, int& p) {
    
    srand(time(nullptr));
    const int a = (rand() % 5) +1; // Para que no de 0 algún número
    const int b = (rand() % 5) +1;
    const int c = (rand() % 5) +1;
    s = a + b + c;
    p = a * b * c;
    
    cout << "Debes adivinar el código de tres números enteros\n";
    cout << "La suma de los números es: " << s << "\n";
    cout << "El producto de los números es: " << p << "\n";
}


int main() {

    int sum;
    int prod;

    init(sum, prod);

    int in_a;
    int in_b;
    int in_c;
    int counter = 3;

    do {
        cout << "Introduzca el primer número: ";
        cin >> in_a;
        cout << "Introduzca el segundo número: ";
        cin >> in_b;
        cout << "Introduzca el tercer número: ";
        cin >> in_c;

        int in_sum = in_a + in_b + in_c;
        int in_prod = in_a * in_b * in_c;

        if (in_sum == sum && in_prod == prod){
            cout << "El código introducido es correcto\n";
            break;
        } else {
            counter--;

            cout << "El código introducido es incorrecto";
            if (counter > 0) {
                cout << ", intente denuevo.\n";
            } else {
                cout << ".\n";
            }

            cout << "Le quedan " << counter << " oportunidad";
            if (counter == 1) {
                cout << ".\n";
            } else {
                cout << "es.\n";
            }
        }
    } while (counter > 0);

    if (counter == 0) {
        cout << "Has perdido\n";
    } else {
        cout << "Has ganado\n";
    }

    return 0;
}
