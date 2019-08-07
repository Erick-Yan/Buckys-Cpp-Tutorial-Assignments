#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age;

    cout << "Enter you age:" << endl;
    cin >> age;

    switch(age)
    {
    case 7:
        cout << "Make More Friends" <<  endl;
        break;

    case 18:
        cout << "Don't Drink and Drive" << endl;
        break;

    case 25:
        cout << "Learn and try different things out" << endl;
        break;

    case 45:
        cout << "Family First" << endl;
        break;

    case 65:
        cout << "Relax" << endl;
        break;

    case 80:
        cout << "You've done well" << endl;
    }

return 0;
}

