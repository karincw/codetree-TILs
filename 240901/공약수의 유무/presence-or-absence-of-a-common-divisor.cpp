#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    std::cin >> a>>b;
    
    for (int i = a ; i <= b; i++)
    {
        if(1920 % i == 0 && 2880 % i == 0)
        {
            std::cout <<"1";
            return 0;
        }
    }
    std::cout << "0";
    
    return 0;
}