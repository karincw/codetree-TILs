#include <iostream>
using namespace std;

int main() {
    int a,b,r = 1;
    std::cin >> a>>b;
    for(int i = 1; i <= b; ++i)
    {
        if(i % a == 0)
        {
            r *= i;
        }
    }
    std::cout << r;
    return 0;
}