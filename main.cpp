#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ArrayOne[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++)
        {
            cout << ArrayOne[row][column];
        }
        cout << endl;
    }

return 0;
}


