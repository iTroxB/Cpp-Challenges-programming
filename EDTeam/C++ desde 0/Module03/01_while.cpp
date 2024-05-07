#include <iostream>
using namespace std;

int main() {

    while (true) {
        char harry_got_message = 'N';
        cout << "No debo decir mentiras\n";
        cout << "Harry aprendió la lección? ";
        cin >> harry_got_message;
        if (harry_got_message == 'S') {
            break;
        }
    }

    cout << "Castigo completado\n";
    return 0;
}
