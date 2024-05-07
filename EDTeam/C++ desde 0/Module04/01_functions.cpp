#include <iostream>
using namespace std;

int sum(int a, int b) {

    int result  = a + b;
    return result;
}

void hi() {
    cout << "Hello, World!\n";
}

int main() {
    
    hi();
    int z = sum(4,3);
    cout << "El resultado de la suma de 4 y 3 es " << z << endl;
    return 0;
}
