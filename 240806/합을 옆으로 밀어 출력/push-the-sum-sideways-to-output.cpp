#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	std::cin >> n;


	int origin = 0;

	for (int i = 0; i < n; ++i)
	{
        int a = 0;
		std::cin >> a;
        origin += a;
	}

	std::string originstr;
	std::string result;
	originstr = std::to_string(origin);

	originstr.push_back(originstr[0]);

    for(int i = 1; i < originstr.size(); ++i)
    {
        result += originstr[i];
    }

    std::cout << result;

	return 0;
}