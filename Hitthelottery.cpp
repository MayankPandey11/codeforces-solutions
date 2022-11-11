

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,a=0,b=0,c=0,d=0;
    cin>>n;
    if(n==0){
        cout<<"0";
    }
    
        
     if(n>=100)
    {
        a=n/100;
        n=n%100;
        
    }
     if(n>=20 && n<100){
        b=n/20;
        n=n%20;
    }
     if(n>=10 && n<20){
        c=n/10;
        n=n%10;
    }
     if(n>=5 && n<10){
        d=n/5;
        n=n%5;
    }
    
    
    cout<<a+b+c+d+n;
}