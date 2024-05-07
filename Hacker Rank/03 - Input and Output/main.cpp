#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int z;
    
    while (true) {
        //cout << "Enter 3 numbers into 0 to 1000: ";
        cin >> x >> y >> z;
        
        if ((1 <= x && x <= 1000) && (1 <= y && y <= 1000) && (1 <= y && y <= 1000)) {
            int i = x + y + z;
            cout << i;
            break;
        } else {
            cout << "Enter only numbers into 0 to 1000!";
        }
    }

    return 0;
}
