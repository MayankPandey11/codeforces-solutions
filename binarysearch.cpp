#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size ,int key) 
{
   int start = 0 ;
   int end = size - 1 ;
   int mid = start + (end - start)/2 ;
   while (start <= end)
   {
      if (arr[mid] == key)
      {
        return mid ;
      }
      if (arr[mid] < key)
      {
        start = mid+1 ;
      }
      else end = mid-1 ;
      
      mid = start + (end - start)/2 ;
   }
   return -1 ;
}

int main(){
      int n ;
      cin >> n ;
      int arr[n] ;
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i] ;
        
      }
      int key;
      cin >> key ;
      int index = binarysearch(arr , n , key) ;
      cout << "index is : "<<  index << endl ;


return 0;
}