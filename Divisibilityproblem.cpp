// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;

//     cin >> t;

//     while (t--)
//     {
//         int a, b, count = 0;
//         cin >> a >> b;

//         while (a % b != 0)
//         {
//             a = a + 1;

//             count++;
//         }
//         cout << count << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
         int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << "0" << endl;
        else
            cout << b - (a % b) << endl;
    }
}