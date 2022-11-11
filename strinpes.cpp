
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
  
char mat[8][8];
loop(i,0,8)
{
    loop(j,0,8)cin>>mat[i][j];
}
char result='p';
loop(i,0,8)
{
    if( (mat[0][i]=='B' && mat[7][i]=='B'))
    {
        int count=1;
          loop(j,0,7)
          {
               if(mat[j][i]==mat[j+1][i])count++;
          }
          if(count==8)
          {
            result='B';
            
          }
    }
   
   
    
}
loop(i,0,8)
{
    if( (mat[i][0]=='R' && mat[i][7]=='R' ) )
    {
        int count=1;
          loop(j,0,7)
          {
               if(mat[i][j]==mat[i][j+1])count++;
          }
          if(count==8)
          {
             result='R';

            
          }
    }
}
 cout<<result<<endl;
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