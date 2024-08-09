#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    double a ;
    std::cin >> a;

    a += 1.5f;

    std::cout.precision(3);

    std::cout << a;
    return 0;
}