

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
    ll n, countOne_a = 0, countOne_b = 0,count = 0;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    loop(i, 0, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            countOne_a++;
        }
    }
    loop(i, 0, n)
    {
        cin >> b[i];
        if (b[i] == 1)
        {
            countOne_b++;
        }
    }
    if (a == b)
    {
        print(0);
    }
    else
    {
        if (countOne_a == countOne_b)
        {
            cout << 1 << endl;
        }
        else
        {
            loop(i, 0, n)
            {
                if (a[i] != b[i])
                {
                    count++;
                }
            }
            cout << min(count, abs(countOne_a - countOne_b) + 1) << endl ;
        }
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