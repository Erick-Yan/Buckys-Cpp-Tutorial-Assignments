#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int FactorialCalculator(int Number)
{
        if(Number == 1)
    {
        return 1;
    }else
    {
        return Number*FactorialCalculator(Number - 1);
    }
}

int main()
{
    int Number;
    cout << "Enter A Number to find Factorial:" << endl;
    cin >> Number;
    cout << "Factorial of " << Number << " is " << FactorialCalculator(Number) << endl;

return 0;
}

