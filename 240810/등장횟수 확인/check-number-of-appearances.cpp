#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e,r=0;
    std::cin >>a>>b>>c>>d>>e;
    if(a % 2 == 0)
        r++;
    if(b % 2 == 0)
        r++;
    if(c % 2 == 0)
        r++;
    if(d % 2 == 0)
        r++;
    if(e % 2 == 0)
        r++;

        std::cout << r;
    return 0;
}