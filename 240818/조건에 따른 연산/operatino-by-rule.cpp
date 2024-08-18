#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    int cnt = -1;

    while (n < 1000)
    {
        if(n / 2 == 0)
        {
            n*=3;
            n+=1;
        }
        else
        {
            n*=2;
            n+=2;
        }
        cnt++;
    }

    std::cout << cnt;

    return 0;
}