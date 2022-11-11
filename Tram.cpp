

#include <iostream>

using namespace std;

int main()
{
    int n, c = 0, max = 0;
    int a, b;

    cin >> n;
    for (int i = 1, j = 1; i <= n; i++)
    {
        cin >> a >> b;

        c += b - a;
        if (max < c)
        {
            max = c;
        }
    }
    cout << max;
}
