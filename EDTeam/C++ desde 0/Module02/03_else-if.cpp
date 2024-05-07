#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Introduzca su edad: ";
    cin >> age;

    if (age < 12) {
        cout << "El usuario es un niño\n";
    } else if (age < 18) {
        cout << "El usuario es adolecente\n";
    } else if (age < 60) {
        cout << "El usuario es un adulto\n";
    } else {
        cout << "El usuario es de la tercera edad\n";
    }

    return 0;
}
