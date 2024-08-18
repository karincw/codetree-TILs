#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    int cnt = 0;

    while (n < 1000)
    {
        cnt++;
        if(n % 2 == 0)
        {
            n = n*3+1;
        }
        else
        {
            n = n*2+2;
        }
    }

    std::cout << cnt;

    return 0;
}