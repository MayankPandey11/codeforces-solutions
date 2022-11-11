#include<iostream>
using namespace std ;

void printarray(int arr[] , int n ) 
{
    for (int  i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ;
    
}
 void swaparray(int arr[] , int size) 
 {
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size )
        {
            swap(arr[i] , arr[i+1] ) ;
        }
        
    }
    
 }
int main()
{
   
   int n ;
   cin >> n; 
   int even[100000] ;
  
   for (int i = 0; i < n; i++)
   {
     cin >> even[i] ;
   }

   
   

   swaparray(even , n) ;
   printarray(even , n) ;
    
   
   

} 