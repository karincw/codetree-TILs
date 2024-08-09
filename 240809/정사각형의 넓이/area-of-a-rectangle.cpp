#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    std::cout << n*n << "\n";

    if(n < 5)
    {
        std::cout << "tiny";
    }
    return 0;
}