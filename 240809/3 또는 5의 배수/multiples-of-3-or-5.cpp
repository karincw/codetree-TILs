#include <iostream>
using namespace std;

int main() {
    int a;
    std::cin >> a;

    std::cout << (a % 3 == 0 ? "YES" : "NO") << "\n";
    std::cout << (a % 5 == 0 ? "YES" : "NO");

    return 0;
}