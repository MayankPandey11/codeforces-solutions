

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
       int flag=1;
       string s;
       cin>>s;
       
       for(int i=0; i<s.size(); i++)
       {
           int cnt=1;
           while(s[i]==s[i+1] && i+1<s.size()) cnt++, i++;
           if(cnt<2)
           {
               flag=0;
               break;
           }
       }
       
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
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