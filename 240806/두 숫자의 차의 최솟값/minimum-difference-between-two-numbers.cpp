#include <iostream>
using namespace std;

int main() {

    int n;
    int numbers[101];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i]; 
    }

    int result = 100;
    for(int i = 0; i < n; i++)
    {
            if(numbers[i+1] - numbers[i] < result)
            {
                if(numbers[i+1] - numbers[i] < 0) continue;
                result = numbers[i+1] - numbers[i];
            }
    }

    std::cout << result;

    return 0;
}