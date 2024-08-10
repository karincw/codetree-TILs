#include <iostream>
using namespace std;

int main() {
    int a,b;
    std::cin >>a >> b;
    if(a <= 0)
        std::cout << 0;
    else
    {
        for(int i = 0; i < b; i++)
            std::cout << a;
    }
    return 0;
}