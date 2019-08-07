#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void PassByValue(int x);
void PassByReference(int *x);

int main()
{
    int ValueOne = 45;
    int ValueTwo = 12;

    PassByValue(ValueOne);
    PassByReference(&ValueTwo);

return 0;
}

void PassByValue(int x)
{
    x = 23;
}

void PassByReference(int *x)
{
    *x = 64;
}


