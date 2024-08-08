#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    float a ;
    std::cin >> a;

    a += 1.5f;

    std::cout.precision(3);

    std::cout << floor(a);
    return 0;
}