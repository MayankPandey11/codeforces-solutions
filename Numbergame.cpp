

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
#define loop_n(i, n, x)   for (int i = x; i > n; --i)

typedef long long int ll;
typedef vector<int> vec;
typedef pair<int, int> pr;
typedef map<int,int> mp;
int solution()
{
  ll n;
  cin >> n;
  vector<ll> v(n);
  loop(i, 0, n)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  loop_n(k, 0, n)
  {
    ll p = n - 1, rounds = 0;
    ll moves = rounds;
    while (rounds < k && p >= moves)
    {
      ll a = 0;
      moves = rounds;
      while (!a && p >= moves)
      {
        if (v[p] <= k + 1 - (rounds + 1))
        {
          rounds++;
          a = 1;
        }
        p--;
      }
    }
    if (rounds == k)
    {
      cout << k << endl;
      return true;
    }
  }

  cout << 0 << endl;
  return true;
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