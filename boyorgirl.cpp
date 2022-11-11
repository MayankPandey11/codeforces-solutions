#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,j=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for( i=0; i< s.length();i++)
    {
        if(s[i]!=s[i+1])
        {
            j++;
        }
    }
    if(j%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
}