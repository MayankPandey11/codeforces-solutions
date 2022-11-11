#include <bits/stdc++.h>
using namespace std;

int main()
{
    // long long n ;
    // cin >> n ;
    // int count = 0 ;

    // while (n!=0)
    // {
    //    if (n%10==4 || n%10==7)
    //    {
    //       count+=1 ;
    //    }
    //    n/=10 ;
    // }
    // if (count==4 || count==7)
    // {
    //     cout << "YES";
    // }
    // else{
    //     cout << "NO";
    // }
    // return 0 ;

    // }
    string s;
    cin >> s;
    int counter = 0;
    int len = s.length();
    int seven = count(s.begin(), s.end(), '4');
    int four = count(s.begin(), s.end(), '7');
    if ((four + seven == 4 || four + seven == 7))
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
