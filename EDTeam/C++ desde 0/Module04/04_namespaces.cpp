#include <iostream>

namespace Math {
    int sum(int a, int b) {

        return a + b;
    }

    int abs(int x) {

        if (x < 0) {
            return -x;
        } else {
            return x;
        }
    }
}

int main() {

    std::cout << "5 + 3 = " << Math::sum(5, 3) << "\n";
    std::cout << "|-5| = " << Math::abs(-5) << "\n";
    return 0;
}
