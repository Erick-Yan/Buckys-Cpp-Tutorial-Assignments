#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int ArrayOne[5] = {1, 2, 3, 4, 5};
    int Product = 1;

    for(int x = 0; x < 5; x++)
    {
        Product = Product * ArrayOne[x];

        cout << Product << endl;
    }

return 0;
}

