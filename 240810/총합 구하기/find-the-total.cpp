#include <iostream>
using namespace std;

int main() {
    int a,b,r = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if(i % 6 ==0 && i % 8 != 0)
        {
            r += i;
        }
    }
    std::cout << r;
    return 0;
}