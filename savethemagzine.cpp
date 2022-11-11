
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
ll n;
cin>>n;
string str;
cin>>str;
vector<ll> array(n);
loop(i,0,n)cin>>array[i];
ll minimum=INT_MAX;
ll result=0;
for(ll i=n-1;i>=0;i--)
{
   while(str[i]=='1'&& i>=0)
   {
       result+=array[i];
       minimum=min(array[i],minimum);
       i--;
   }
   if(array[i]>minimum && i>=0 && str[i]=='0'){
    result+=array[i];
    result-=minimum;
   }
   minimum=INT_MAX;
   
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



// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int t ;
//     cin >> t ;
//     while(t--){
//     int n ;
//     cin >> n  ;
//     int c = 0 ;
//     int sum = 0 ;
//     string s; 
//     cin >> s; 
//     for(int i = 0 ; i < s.length(); i++){
//         if(s[i] == '1'){
//             c++ ;
//         }
//     }
//     vector<int>v(n) ;
//     for(int i = 0 ; i < n ; i++){
//        cin >> v[i] ;
//     }
//     sort(v.begin(),v.end(),greater<int>());
//     for(int i = 0 ; i < c ; i++){
//         sum += v[i] ;
//     }
//      cout << sum << endl ;
//     }
//     return 0 ;
// }