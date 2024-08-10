#include <iostream>
using namespace std;

int main() {
    int a,b;
    std::cin >> b >> a;
    for(int i = b; i >= a; --i)
        if(i % 2 == 1)
            std::cout << i << " ";
    return 0;
}