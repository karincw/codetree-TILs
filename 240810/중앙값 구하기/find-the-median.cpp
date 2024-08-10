#include <iostream>
using namespace std;

int main() {
    int a,b,c, result;
    std::cin >> a >> b >> c;

    if((b > a && a > c) || (c > a && a > b))
        std::cout << a;
    if((a > b && b > c) || (c > b && b > a))
        std::cout << b;
    if((b > c && c > a) || (a > c && c > b))
        std::cout << c;

    return 0;
}