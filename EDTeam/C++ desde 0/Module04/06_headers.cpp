#include <iostream>
#include "math.hpp"

int main() {

    std::cout << "5 + 3 = " << Math::sum(5, 3) << "\n";
    std::cout << "|-5| = " << Math::abs(-5) << "\n";
    return 0;
}
