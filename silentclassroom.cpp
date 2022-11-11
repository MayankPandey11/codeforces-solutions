
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
    ll n , count = 0 ;
    cin >> n ;
    string s; 
   vector<char>ans;
    loop(i,0,n){
        cin >> s; 
       ans.pb(s.at(0));
    
    }
   map<char,int>m;
   loop(i,0,n){
    m[ans[i]]++;
   }

   for(auto it : m){
       
		int x = it.second/2;
		int y = it.second-x;
		count = count + x*(x-1)/2;
		count = count + y*(y-1)/2;

    }


    cout << count << endl ;
    }


int main()
{
    fastio()


        solution() ;


    return 0;
}