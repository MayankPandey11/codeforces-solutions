#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    if (n<4)
    {
        cout << -1 ;

    }
    if(n%2 != 0)
    {
        cout << 9 <<" ";
        cout <<abs(n-9) << endl ;

    }
    if(n%2 == 0)
    {
        cout << 8 <<" ";
        cout << abs(n-8) << endl; 
    }
    
    return 0 ;
    
}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
