
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
     ll n ;
    cin >> n ;
    if(n<10 && n >= 1){
        cout << n - 1 << endl ;
    }
    else if(n<100 && n >=10){
        cout << n - 10 << endl ;
    }
    else if(n<1000 && n >=100){
        cout << n - 100 << endl ;
    }
     else if(n<10000 && n >=1000){
        cout << n - 1000<< endl ;
    }
     else if(n<100000 && n >=10000){
        cout << n - 10000 << endl ;
    }
     else if(n<1000000 && n >=100000){
        cout << n - 100000 << endl ;
    }
     else if(n<10000000 && n >=1000000){
        cout << n - 1000000 << endl ;
    }
     else if(n<100000000 && n >=10000000){
        cout << n - 10000000 << endl ;
    }
    else if(n<1000000000 && n >= 100000000){
        cout << n - 100000000 << endl ;
    }
    else{
        cout << n - 1000000000 << endl ;
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