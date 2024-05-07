#include <iostream>
using namespace std;

int main() {
    
    constexpr int legal_age = 18;
    int age;

    cout << "Introduzca la edad del comprador: ";
    cin >> age;

    if (age >= legal_age) {
        cout << "El comprador puede adquirir las bebidas\n";
    } else {
        cout << "El comprador no puede adquirir las bebidas\n";
    }

    cout << "El comprador terminó sus compras\n";

    return 0;
}
