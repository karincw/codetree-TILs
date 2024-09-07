#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e;
    std::cin >> a >> b>>c>>d>>e;
    bool isAll = true;
    isAll = a % 3 == 0;
    isAll = isAll ? b % 3 == 0 : false;
    isAll = isAll ? c % 3 == 0 : false;
    isAll = isAll ? d % 3 == 0 : false;
    isAll = isAll ? e % 3 == 0 : false;

    std::cout << isAll ? "1" : "0";

    return 0;
}