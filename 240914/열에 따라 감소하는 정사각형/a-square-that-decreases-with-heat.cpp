#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x =n ; x > 0; x--)
        {
            std::cout <<  x << " ";
        }
        std::cout << "\n";
    }
    return 0;
}