#include <iostream>
using namespace std;

int main() {
    constexpr int num_repeat = 5;
    constexpr int num_circuit = 4;

    for (int i = 0; i < num_circuit; i++) {
        cout << "Ejecutando circuito número " << i + 1 << "\n";
        for (int j = 0; j < num_repeat; j++) {
            cout << "\t Ejecutando ejercicio número " << j + 1 << "\n";
        }
    }

    return 0;
}
