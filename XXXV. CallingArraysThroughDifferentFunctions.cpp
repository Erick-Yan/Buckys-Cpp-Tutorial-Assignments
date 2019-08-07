#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void PrintArray(int ArrayName[], int ArraySize);

int main()
{
    int ArrayOne[3]={1, 2, 3};
    int ArrayTwo[4]={1, 2, 3, 4};

    PrintArray(ArrayTwo, 4);

return 0;
}

void PrintArray(int ArrayName[], int ArraySize)
{
    for(int x = 0; x < ArraySize; x++)
    {
        cout << ArrayName[x] << endl;
    }
}

