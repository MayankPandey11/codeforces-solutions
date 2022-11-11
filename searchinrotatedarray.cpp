#include <bits/stdc++.h>
using namespace std;

int getpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return s;
}

int binarysearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
         mid = s + (e - s) / 2;
    }

    return -1;
}
 
 int findposition(int arr[] , int n , int key)
 {
    int pivot = getpivot(arr , 5 ) ;
    if (key >= arr[pivot] && key >= arr[n - 1])
    {
        return binarysearch(arr,pivot,n-1,key);
    }
    else
    {
         return binarysearch(arr,0,pivot-1,key);
    }
    
 }

int main()
{
    int arr[4] = {2,3,5,8};

    cout << "The position is : = " << findposition(arr , 4 , 3) << endl ;
    return 0 ;


 
}