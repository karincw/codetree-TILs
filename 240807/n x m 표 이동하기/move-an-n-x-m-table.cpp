#include <iostream>
using namespace std;

int main() {
    int m, n;
    int arr[501][501] = {{}};
    std::cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> arr[j][i];
        }   
    }

    int x = 0, y = 0;
    int highValue = 0;
    int movePos[2]; 
    int result = 0;

    while(!(m <= x && n <= y))
    {
        highValue = 0;

        result += arr[x][y];
        
        if (highValue < arr[x + 1][y])
        {
            highValue = arr[x + 1][y];
            movePos[0] = 1;
            movePos[1] = 0;
        }
        if (highValue < arr[x][y + 1])
        {
            highValue = arr[x][y + 1];
            movePos[0] = 0;
            movePos[1] = 1;
        }
        if (highValue < arr[x + 1][y + 1])
        {
            highValue = arr[x + 1][y + 1];
            movePos[0] = 1;
            movePos[1] = 1;
        }

        x += movePos[0];
        y += movePos[1];

    }
    std::cout << result;

    return 0;
}