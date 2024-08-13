#include <iostream>
using namespace std;

int main() {
    
    int n;
    std::cin >> n;

    int result = 0;
    for (int i = 1; n >= 1; i++)
    {
            result++;
        
        n /= i;
    }
    std::cout << result;
    
    return 0;
}