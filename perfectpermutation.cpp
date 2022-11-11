#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t; 
    while(t--)
    {
    int n;
    cin >> n;
    int arr[n] ;
   if (n == 1)
   {
     cout << "1" << endl ;
   }
   else if (n == 2)
   {
    cout << 2 << " " << 1 << endl ;
   }
   else 
   {
    arr[0] = n ;
   
   for (int i = 1; i < n; i++)
   {
     arr[i] = i ;
   }
   for (int i = 0; i < n; i++)
   {
     cout << arr[i] << " " ;

   }
    cout<<endl;
   }
   
   
   
  
  
    }
      return 0;
}