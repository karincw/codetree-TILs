#include <iostream>
using namespace std;

int main() {
    int a;
    std::cin >> a;
    for(int i = 0; i <= a; ++i)
    {
        if(!(i % 2 == 0 && i % 4 != 0))
        {
            if(!((i/8)%2 == 0))
            {
                if(!(i%7 < 4))
                {
                    std::cout << i << " ";
                }
            }
        }
    }
    return 0;
}