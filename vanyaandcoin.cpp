#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int s ;
    cin >> s ;
    while(s--)
    {
        int a , b ;
        cin >> a >> b ;
        if (a==0)
        {
            cout << 1 << endl ;
        }
        else 
        cout << (2*b+a)+1 << endl ;
        
    }
    return 0 ;
}