#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count = 0;

    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        while (arr[i] < arr[i + 1])
        {

            count++;
        }
        cout << count << endl;
    }
    

    return 0;
}