
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

typedef long long int ll;
typedef vector<int> vec;
typedef pair<int, int> pr;
typedef map<int,int> mp;

void solution()
{
    ll n;
        cin>>n;
        vector<pair<int,int>> v(n);
        ll zero=0,one=0;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            if(temp==0)
                zero++;
            else
                one++;
            v[i].first=temp;
        }
        vector<ll> a(zero), b(one);
        int y=0,z=0;
 
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            v[i].second=temp;
            if(v[i].first==0){
                a[y]=v[i].second;
                y++;
            }
            else{
                b[z]=v[i].second;
                z++;
            }
        }
        
        sort(a.begin(),a.end(),greater<ll>());
        sort(b.begin(),b.end(),greater<ll>());
        ll sum = 0;
        for(auto x:a){
            sum+=x;
        }
        for(auto x:b){
            sum+=x;
        }
        if(zero==one ){
            sum*=2;
            sum-=min(a[zero-1],b[one-1]);
            
            cout << sum << endl;
        }
        else{
            ll mini = min(zero, one);
            for (ll i = 0; i < mini; i++)
            {
                sum += a[i] + b[i];
            }
            cout << sum << endl;
        }
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