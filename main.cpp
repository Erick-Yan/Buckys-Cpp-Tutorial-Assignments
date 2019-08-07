#include <iostream>

using namespace std;

class ClassName
{
public:
    ClassName(string z)
    {
        setName(z);
    }

    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
private:
    string name;
};

int main()
{
    ClassName ClassObject("Inputted");
    cout << "it has been " << ClassObject.getName();

return 0;
}

