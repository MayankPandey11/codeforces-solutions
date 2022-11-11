
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
    string str ;
    cin >> str ;
    int len = str.length() ;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(int i=0; i<len; i++)
	{   

		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
		{

		    
			for(int j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		i--;
		len--;
		}
        
	}
    for(int i = 0 ; i < len ; i++){
        cout << "." << str[i];

    }

  
}

int main()
{
    fastio()
  
        solution() ;
    

    return 0;
}