#include <iostream>
using namespace std;

int main() {

    int a,b;
    std::cin >> a >> b;
    for(int i = a; i <= b; ++i)
        if(i % 2 == 1)
            std::cout << i << " ";
    return 0;
}