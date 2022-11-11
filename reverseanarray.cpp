#include<iostream>
using namespace std ;

void reverse(int arr[] , int n)
{
    int start = 0 ;
    int end = n-1 ;
    while(start <= end) 
    {
       swap(arr[start] , arr[end]) ;
       start++ ;
       end-- ;
    }
}

void printarray(int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
         cout << arr[i] << " " ;
        
    }
    
}
int main()
{
    int n ;
    cin >>  n; 
    int arr[10000] ;
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i] ;
    }
    reverse(arr , n) ;
    printarray(arr,n ) ;
    
}