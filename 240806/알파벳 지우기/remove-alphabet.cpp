#include <iostream>
#include <string>
using namespace std;

int main() {

    std::string n;
    std::cin >> n;
    std::string m;
    std::cin >> m;

    std::string nn = "";
    std::string mn = "";

    for (int i = 0; i < n.size(); ++i)
    {
        if ('0' <= n[i] && n[i] <= '9')
        {
            nn.push_back(n[i]);
        }
    }
    for (int i = 0; i < m.size(); ++i)
    {
        if ('0' <= m[i] && m[i] <= '9')
        {
            mn.push_back(m[i]);
        }
    }

    int result = std::stoi(nn) + std::stoi(mn);

    std::cout << result;

    return 0;
}