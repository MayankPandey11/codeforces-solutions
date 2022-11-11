#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i;
    cin >> n >> t;

    string s;
    cin >> s;
   while(t--)
   {
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B' && s[i + 1] == 'G')
        {
            int temp;
            temp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp;
            i++ ;


        }

        

        // s[i] != s[i+1] ;
    }
   }

    cout << s << endl;

    return 0;
}
