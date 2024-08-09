#include <iostream>
using namespace std;

int main() {
    std::cout << std::fixed;
    std::cout.precision(2);
    int a,b;
    std::cin >> a >> b;

    std::cout << (float)(a+b)/(a-b);

    return 0;
}