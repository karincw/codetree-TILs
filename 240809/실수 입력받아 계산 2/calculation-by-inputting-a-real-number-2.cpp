#include <iostream>
using namespace std;

int main() {
    float a;
    std::cin >> a;
    a += 1.5f;
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << a;
    return 0;
}