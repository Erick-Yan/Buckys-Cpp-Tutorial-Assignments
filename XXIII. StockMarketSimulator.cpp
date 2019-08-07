#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float RevenueGenerated;

    float InitialInvestment;

    float InterestEarned;

    cout << "You have invested the following amount:" << endl;
    cin >> InitialInvestment;

    cout << "The interest rate is:" << endl;
    cin >> InterestEarned;

    for(int day = 1; day < 30; day++)
    {
        RevenueGenerated = InitialInvestment * pow(1 + InterestEarned, day);
        cout << "On day " << day << " you've made " <<  RevenueGenerated << endl;
    }

return 0;
}

