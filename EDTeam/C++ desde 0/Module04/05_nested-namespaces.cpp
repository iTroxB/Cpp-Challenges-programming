#include <iostream>

namespace myNamespace {

    int increment(int x) {
        return x + 1;
    }

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

    namespace Output {
        void print_hello_world() {
            
            std::cout << "Hello, World! \n";
        }

        void greet(const char* name) {
            std::cout << "Hello " << name << "!\n";
        }
    }
}

int main() {

    std::cout << "5 + 1 = " << myNamespace::increment(5) << "\n";
    myNamespace::Output::greet("Javier");
    std::cout << "9 + 1 = " << myNamespace::Math::sum(9, 1) << "\n";

    return 0;
}
