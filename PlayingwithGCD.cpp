

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
#define loop(i, x, n)     for(ll i = x; i <= n; i++)
#define loop_n(i, n, x)   for (int i = x; i > n; i--)

typedef long long int ll;
typedef vector<int> vec;
typedef pair<int, int> pr;
typedef map<int,int> mp;

ll lcm(ll a, ll b)
{
    ll g = __gcd(a, b);
    return (a * b / g);
}
void solution()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 2, 1);
    loop(i,1,n)
    {
        cin >> a[i];
    }
    vector<ll> b(n + 2, 1);
    loop(i,1,n+1)
    {
        b[i] = lcm(a[i], a[i - 1]);
    }
    loop(i,1,n)
    {
        if (__gcd(b[i], b[i + 1]) != a[i])
        {
            no 
            return;
        }
    }
    yes
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