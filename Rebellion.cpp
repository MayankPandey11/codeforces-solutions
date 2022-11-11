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
    ll n , count = 0  ;
    cin >> n ;
    vector<ll>a(n);
    loop(i,0,n){
        cin >> a[i] ;
    }
    ll i = 0 ;
    ll j = n - 1 ;
    ll ans = 0 ;
    while(i<j){
        if(a[j] == 1){
            j--;
        }
        else if(a[i] == 1 && a[j] == 0){
            ans++;
            i++;
            j--;
        }
        else if(a[i] == 1 && a[j] == 1){
            i++ ;
            j--;
        }
        else if(a[i] == 0 && a[j] == 1){
            i++ ;
        }
        else{
            i++ ;
        }
    }
    cout << ans << endl ;
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