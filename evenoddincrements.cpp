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

typedef long long int ll ;
typedef vector<ll> vec;
typedef pair<ll, ll> pr;
typedef map<ll,ll> mp;
void solution()
{
ll n, x;
    cin>>n>>x;
 
    ll a[n];
    ll e=0, o=0, sumE=0, sumO=0;
 
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
 
        if(a[i]%2) o++, sumO+=a[i];
        else e++, sumE+=a[i];
    }
 
    while(x--)
    {
        ll typ, val;
        cin>>typ>>val;
 
        if(typ)
        {
            if(val%2==0)
            {
                sumO+=(val*o);
            }
            else
            {
                sumE+=(sumO+ val*o);
                e+=o;
                o=0;
                sumO=0;
            }
        }
        else
        {
            if(val%2==0)
            {
                sumE+=(val*e);
            }
            else
            {
                sumO+=(sumE+ val*e);
                o+=e;
                e=0;
                sumE=0;
            }
        }
 
        cout<<sumE+sumO<<endl;
    }    
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