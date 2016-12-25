#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
    
    void func() { cout << "Function func()\ Create Maksim Leontev group 321 knit 2016 December\n"; }
};

class ChildClass : public Base
{
    public :
    ChildClass() { cout << "Construct Child object\n";}
    ~ChildClass() { cout << "Destruct Child object\n";}
    
    void func() { cout << "Function func() of class Child :)\n"; }
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
