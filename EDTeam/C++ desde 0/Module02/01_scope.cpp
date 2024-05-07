#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "X in main: " << x << endl;
    {
        int x = 5;
        cout << "X in first scope: " << x << endl;
        {
            int x = 5;
            cout << "X in second scope: " << x << endl;
        }
    }
    return 0;
}
