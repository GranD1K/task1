#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
    
    void func() { cout << "Function func() of class Base\n"; }
};

class ChildClass : public Base
{
    public :
    B() { cout << "Construct Child object\n";}
    ~B() { cout << "Destruct Child object\n";}
};

int main(int argc, char *argv[])
{    
    cout << "* Create Object Child" << endl;
    ChildClass child;
    
    cout << "* Create Object Base" << endl;
    Base base;
    
    cout << "* Call method func() for object base" << endl;
    base.func();
    
    cout << "* Call method func() for object child" << endl;
    child.func();
    
    return 0;
}
