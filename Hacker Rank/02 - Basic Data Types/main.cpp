#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long long j;
    char a;
    float f;
    long double z;
    
    cin >> i >> j >> a >> f >> z;
    
    cout << i << endl;
    cout << j << endl;
    cout << a << endl;
    cout << fixed << setprecision(cout.precision()) << f << endl;
    cout << fixed << setprecision(cout.precision()) << z << endl;
    
    return 0;
}
