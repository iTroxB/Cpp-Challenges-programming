#include <iostream>

int main() {
    int age;
    // float price = 35.3f;
    // bool is_true = true;
    // char c = 'a';

    // const int min_age = 18;
    // constexpr int max_age = 60;

    // std::cout << "La edad mínima es " << min_age << " años\n";
    // std::cout << "La edad máxima es " << max_age << " años\n";

    int& age_ref = age;
    
    std::cout << "Ingresa tu edad: ";
    std::cin >> age;
    std::cout << "Tienes " << age << " años.\n";
    std::cout << "La referencia de age es " << age_ref << "\n";

	age_ref = 15;
    std::cout << "La nueva referencia de age es " << age_ref << "\n";
    std::cout << "La nueva edad es " << age << "\n";
}
