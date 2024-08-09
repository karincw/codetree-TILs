#include <iostream>
using namespace std;

int main() {
    int a,b,c, sum;
    std::cin >> a>>b>>c;
    sum = a+b+c;
    std::cout<< sum << "\n";
    std::cout<< sum/3 << "\n";
    std::cout<< sum - (sum/3) << "\n";
    return 0;
}