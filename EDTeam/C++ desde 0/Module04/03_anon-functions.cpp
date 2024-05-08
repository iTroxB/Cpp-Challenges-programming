#include <iostream>
using namespace std;

int main() {
    auto sum = [] (int a, int b) {
        int result = a + b;
        // return a + b;
        return result;
    };

    // int result = sum(5,3);

    // auto print_result = [result] () {
    //     cout << "5 + 3 = " << result << endl;
    // };
    // print_result();

    int x = 5;
    int y = 3;

    auto use_sum_and_print_result = [sum, x, y] () {
        cout << x << " + " << y << " = " << sum(x, y) << endl;
    };

    use_sum_and_print_result();

    return 0;
}
