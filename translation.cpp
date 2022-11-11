#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;
    cin >> s;
    cin >> r;

  reverse(r.begin(),r.end());
  if (s==r)
  {
     cout << "YES";
  }
  else 
    cout << "NO";
  

    return 0;
}