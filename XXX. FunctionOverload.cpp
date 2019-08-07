#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void PrintNumber(int x)
{
    cout << "The number is " << x << endl;
}

void PrintNumber(float x)
{
    cout << "The number is " << x << endl;
}

int main()
{
    int a = 56;
    float b = 3.14;

    PrintNumber(a);
    PrintNumber(b);

return 0;
}

