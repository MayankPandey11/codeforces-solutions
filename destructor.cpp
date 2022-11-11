// Destructor is an instance member function of a class
// the name of the destructor is same as the name of a class but preceded by a tilde (~) symbol
// Destructors can never be static
// Destructors has no return type
// Destructors takes no argument (No overloading is possible)
// It is invoked implicitly when object is going to destroy

#include <iostream>
using namespace std;

class destructor
{
private:
    int a, b;

public:
    ~destructor()
    {
        cout << "Destructor";
    }
};

void fun()
{
    destructor obj;
}

int main()
{
    fun();
    return 0;
}