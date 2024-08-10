#include <iostream>
using namespace std;

int main() {
    int a,n,r;
    std::cin >> a >> n;
    r = a;
    for (int i = 0; i < n; i++)
    {
        std::cout << (r += n) << "\n";
    }
    return 0;
}