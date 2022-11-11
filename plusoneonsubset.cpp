
// <-------------------mayank221602--------------------------->

#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cout << fixed;                \
    cout << setprecision(1);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(x) cout << x << endl;
#define MP make_pair
#define pb push_back
#define pob pop_back
#define F first
#define S second
#define loop(i, x, n) for (ll i = x; i < n; i++)
#define loop_n(i, n, x) for (ll i = x; i > n; i--)

typedef long long int ll;
typedef vector<ll> vec;
typedef pair<ll, ll> pr;
typedef map<ll, ll> mp;

void solution()
{
    ll n;
    ll count = 0;
    cin >> n;
    ll *arr = new ll[n];
    ll maxi = INT_MIN;
    ll mini = INT_MAX;
    loop(i, 0, n)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
        mini = min(mini,arr[i]);
    }
    cout << maxi - mini << endl ;
}

    int main()
    {
        fastio()
            ll t;
        cin >> t;
        while (t--)
        {
            solution();
        }

        return 0;
    }