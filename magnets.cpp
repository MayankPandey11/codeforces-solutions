#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, count = 0;
    cin >> n;
    int arr[100000];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {

        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}