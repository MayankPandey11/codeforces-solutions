
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
    int a , b , c ;
    cin >> a >> b >> c ;
    int x = max(0, max(b,c) + 1 - a );
    int y = max(0, max(a,c) + 1 - b );
    int z = max(0, max(a,b) + 1 - c);
    cout << x << " " << y << " " << z << endl ;
}

int main()
{
    fastio()
    int t;
    cin >> t;
    while (t--)
    {
        solution() ;
    }

    return 0;
}