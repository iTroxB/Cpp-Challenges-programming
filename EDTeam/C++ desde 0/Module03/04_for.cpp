#include <iostream>
using namespace std;

int main() {
    constexpr int num_lines = 10;

    for (int i = 0; i < num_lines; i++) {
        if (i % 2 == 0){
            continue;
        }
        cout << i << ". No debo patinar dentro de la escuela\n";
    }

    cout << "Castigo completado!\n";
    return 0;
}
