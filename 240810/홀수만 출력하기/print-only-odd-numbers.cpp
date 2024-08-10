#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        if(a % 3 == 0 && a%2 == 1)
        std::cout << a << "\n";

    }
    return 0;
}