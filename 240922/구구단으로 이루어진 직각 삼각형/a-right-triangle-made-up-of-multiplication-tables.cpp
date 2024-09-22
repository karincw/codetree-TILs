#include <iostream>
using namespace std;

int main() {
    int n, m;
    std::cin >> n;
    m = n;

    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            std::cout << i << " * " << j << " = " << i*j;
            if( j != m)
                std::cout << " / ";
        }
        m--;
        std::cout << "\n";
    }

    return 0;
}