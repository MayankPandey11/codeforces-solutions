#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (int i = 0; i <= w; i++)
    {
        sum = sum + k * i;
    }

    if (n > sum)
    {
        cout << "0";
    }
    else
        cout << sum - n << endl;

    return 0;
}