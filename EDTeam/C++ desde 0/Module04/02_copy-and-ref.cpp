#include <iostream>
using namespace std;

void param_by_copy(int x) {
    x = 10;
}

void param_by_ref(int& x) {
    x = 10;
}

int main() {

    int var  = 5;

    cout << "Var antes de param_by_copy: " << var << endl;
    param_by_copy(var);
    cout << "Var después de param_by_copy: " << var << endl;
    param_by_ref(var);
    cout << "Var después de param_by_ref: " << var << endl;
    
    return 0;
}
