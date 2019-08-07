#include <iostream>

using namespace std;

int main()
{
    int Age;
    int TotalNumberofPeople = 0;
    int TotalAge = 0;

    cout << "Enter First Person's Age or Press -1 to Quit" << endl;
    cin >> Age;

    while(Age != -1)
    {
        TotalNumberofPeople++;
        TotalAge = TotalAge + Age;

        cout << "Enter Next Person's Age or Press -1 to Quit" << endl;
        cin >> Age;
    }

    cout << "Therefore, the average age of " << TotalNumberofPeople << " people is: " << TotalAge/TotalNumberofPeople << endl;

return 0;
}

