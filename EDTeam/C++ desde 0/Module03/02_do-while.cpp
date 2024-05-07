#include <iostream>
using namespace std;

int main() {
    char harry_got_message;

    do {
        cout << "No debo decir mentiras\n";
        cout << "Harry aprendió la lección? ";
        cin >> harry_got_message;
    } while (harry_got_message != 'S');

    cout << "Castigo completado\n";
    return 0;
}
