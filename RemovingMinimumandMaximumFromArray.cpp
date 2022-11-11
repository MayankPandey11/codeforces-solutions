
// <-------------------mayank221602--------------------------->

#include <bits/stdc++.h>
using namespace std;
#define mod               1e9 + 7
#define fastio()          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(1);
#define yes               cout << "YES" << endl;
#define no                cout << "NO" << endl;
#define print(x)          cout << x << endl;
#define MP                make_pair
#define pb                push_back
#define pob               pop_back
#define F                 first
#define S                 second
#define loop(i, x, n)     for(int i = x; i < n; i++)
#define loop_n(i, n, x)   for (int i = x; i > n; i--)

typedef long long int ll;
typedef vector<int> vec;
typedef pair<int, int> pr;
typedef map<int,int> mp;

void solution()
{
    int n ;
    cin >> n;
    int *nums = new int[n]; 
    loop(i,0,n){
        cin >> nums[i];
    }
    int val1 = 0 ;
        int val2 = 0 ;
        int val3 = 0 ;
        int val4 = 0 ;
        int mini = INT_MAX ;
        int maxi = INT_MIN ;
        for(int i = 0 ; i < n ; i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
       for(int i = 0 ; i<n;i++){
           if(nums[i] == maxi){
               val1 = i ;
           }
           if(nums[i] == mini){
               val2 = i ;
           }
       }
       reverse(nums,nums+n);
         for(int i = 0 ; i<n;i++){
           if(nums[i] == maxi){
               val3 = i ;
           }
           if(nums[i] == mini){
               val4 = i ;
           }
       }
    //    cout << val1 << endl ;
    //    cout << val2 << endl;
    //    cout << val3 << endl ;
    //    cout << val4 << endl ;    
     
        int minimum1 = min(val1,val3);
        int minimum2 = min(val2,val4);
        int result = (minimum1) + (minimum2) ;
        
      cout << result << endl ;
}

int main()
{
    fastio()
    ll t;
    cin >> t;
    while (t--)
    {
        solution() ;
    }

    return 0;
}

// 1
// 8
// 2 10 7 5 4 1 8 6