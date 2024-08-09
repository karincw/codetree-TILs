#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double a ;
    std::cin >> a;

    a += 1.5f;

    std::cout.precision(3);

    a *= 100;
    a = trunc(a);
    a /= 100;

    std::cout << a;
    return 0;
}