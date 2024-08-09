#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    if(n >= 3000)
        std::cout << "book";
    else if (n >= 1000)
        std::cout << "mask";
    else
        std::cout << "no";

    return 0;
}