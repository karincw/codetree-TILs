#include <iostream>
#include <sstream>
using namespace std;

int main() {
    std::string a;
    std::cin >> a;
    std::string b,c,d,tmp;

    istringstream ss1(a);

    int i = 0;
    while(getline(ss1,tmp,'-')){
        switch (i)
        {
            case 0:
                b = tmp;
            break;
            case 1:
                c=tmp;
            break;
            case 2:
                d=tmp;
            break;
        }
        i++;
    }

    std::cout << b << "-" << d << "-" << c;

    return 0;
}