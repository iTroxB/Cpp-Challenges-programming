#include <iostream>
using namespace std;

int main() {
    int opt;

    do {
        cout << "\n" << "bugHunterx\n";
        cout << "1. Opción 1 \n";
        cout << "2. Opción 2 \n";
        cout << "3. Opción 3 \n";
        cout << "4. Opción 4 \n";
        cout << "5. Salir \n";
        cout << "Ingrese una opción: ";
        cin >> opt;

        switch (opt) {
            case 1:
                cout << "A seleccionado la opción 1 \n";
                break;
            case 2:
                cout << "A seleccionado la opción 2 \n";
                break;
            case 3:
                cout << "A seleccionado la opción 3 \n";
                break;
            case 4:
                cout << "A seleccionado la opción 4 \n";
                break;
            case 5:
                break;
            default:
                cout << "Opción inválida \n";
                break;
        }
    } while (opt != 5);
    
    cout << "Adiós!\n";
    
    return 0;
}
