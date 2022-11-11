#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n = 0, k = 0;

    cin >> n >> k;
    int last_digit;

    for (int i = 1; i <= k; i++)
    {
        last_digit = n % 10;

        if (last_digit == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0;
}
