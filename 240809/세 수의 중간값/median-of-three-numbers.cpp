#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    std::cin >> a>>b>>c;
    std::cout << (b > a ? (b < c ? 1 : 0) : 0);
    return 0;
}