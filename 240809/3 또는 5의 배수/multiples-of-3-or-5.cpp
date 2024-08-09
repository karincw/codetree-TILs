#include <iostream>
using namespace std;

int main() {
    int a;
    std::cin >> a;

    std::cout << (a % 3 == 0 ? "yes" : "no");
    std::cout << (a % 5 == 0 ? "yes" : "no");

    return 0;
}