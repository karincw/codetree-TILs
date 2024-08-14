#include <iostream>
using namespace std;

int main() {
    int n = 22, c = 0;
    float r = 0, result;

    std::cin >> n;
    while (20 <= n && n < 30)
    {
        r += n;
        c++;
        std::cin >> n;
    }
    std::cout << std::fixed;
    std::cout.precision(2);
    result = r / c;
    std::cout << result;
    return 0;
}