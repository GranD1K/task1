#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};

class ChildClass : public Base
{
    public :
    ChildClass() { cout << "Construct Child object\n";}
    ~ChildClass() { cout << "Destruct Child object\n";}
};

int main(int argc, char *argv[])
{
    cout << "* Create Object ChildClass" << endl;
    ChildClass child;

    return 0;
}
