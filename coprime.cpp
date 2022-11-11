
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
typedef vector<ll> vec;
typedef pair<int, int> pr;
typedef map<int,int> mp;

void solution()
{
   ll n , k , ans = -1 ;
   cin >> n ;
   vec v(1001,0);
   loop(i,0,n){
    cin >> k ;
    v[k] = i+1 ;
   
   }   
   loop(i,0,1001){
    loop(j,0,1001){
        if(v[i] && v[j] && __gcd(i,j) == 1){
            ll result = v[i]+v[j];
          ans = max(ans,result);
        }
    }
   }
   cout << ans << " "<< endl ;
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