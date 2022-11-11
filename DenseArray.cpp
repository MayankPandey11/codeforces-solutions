
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
#define loop_n(i, n, x)   for (ll i = x; i > n; i--)

typedef long long  ll;
typedef vector<ll> vec;
typedef pair<ll, ll> pr;
typedef map<ll,ll> mp;

void solution()
{
     ll n;
  cin >> n;
  ll last;
  cin >> last;
  ll ans = 0;
  for (ll i = 1; i < n; i++) {
    ll nw;
    cin >> nw;
    ll a = min(last, nw), b = max(last, nw);
    while (a * 2 < b) {
      ans++;
      a *= 2;
    }
    last = nw;
  }
  cout << ans << endl;
    
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