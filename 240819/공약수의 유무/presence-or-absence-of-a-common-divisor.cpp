#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    std::cin >> a>>b;
    int n = 0, r = 0;
    while (n <= a && n <= b)
    {
        n++;
        if( a % n == 0 && b % n == 0)
        {
            r = 1;
            break;
        }
    }
            std::cout << r;
    
    return 0;
}