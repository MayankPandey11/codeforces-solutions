
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
#define loop(i, x, n)     for(ll i = x; i < n; i++)
#define loop_n(i, n, x)   for (int i = x; i > n; i--)

typedef long long int ll;
typedef vector<ll> vec;
typedef pair<int, int> pr;
typedef map<int,int> mp;

void solution()
{
    ll n , q , k , s , j ;
    cin >> n >> q ;
    ll a[n];
    ll ans[q];
    vector<pair<ll,ll>> qu;
    loop(i,0,n){
        cin >> a[i];
    }
    loop(i,0,q){
        cin >> k ;
        qu.pb({k,i});
    }
    sort(qu.begin(),qu.end());
    s = 0 ;
    j = 0 ;
    loop(i,0,q){
        while(j<n){
        if(a[j] <= qu[i].first){
            s = s + a[j];
            j++;
        }else{
            break;
        }
        }
         ans[qu[i].second]=s;
    }
    loop(i,0,q){
        cout << ans[i] << " " ;
    }cout << endl ;
   

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