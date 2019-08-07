#include <iostream>

using namespace std;

class ClassName
{
public:
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
    ClassName ClassObject;
    ClassObject.setName("Inputted");
    cout << "it has been " << ClassObject.getName();

return 0;
}

