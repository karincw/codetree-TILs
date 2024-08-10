#include <iostream>
using namespace std;

int main() {
    int a, b;
    std::string s1,s2;
    std::cin >> a >> s1 >> b >> s2;
    
    std::cout << ((a >= 19 && s1 == "M") || (b >= 19 && s2 == "M") ? 1 : 0);
    return 0;
}