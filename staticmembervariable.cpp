#include <iostream>
using namespace std;

class account
{
private:
    int balance;
    static float roi;

public:
    void set_balance(int b)
    {
        balance = b;
    }
    static void set_roi(float r)
    {
        roi = r;
    }
};

float account::roi = 3.13f;

int main()
{

    account a1, a2;
    account ::set_roi(2.34f);

    return 0;
}