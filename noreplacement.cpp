
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
    int n ;
    cin >> n ;
    vector<int>v(n);                    
    loop(i,0,n){
        cin >> v[i] ;
    } 
    string s;
    cin >> s ;
    bool x = true ;
    loop(i,0,n){
        loop(j,0,n){
            if(v[i] == v[j] && i != j){
               if(s[i] != s[j]){
                 x = false ;
               }
            }
        }
    }
    if(x == false){
        no
    }else{
        yes
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