#include<iostream>
using namespace std ;
int main(){
    int n , petya , vasya , Tonya , number(0);
    cin >> n ;
    while(n--){
        cin >> petya >> vasya >> Tonya ;
        if( petya + vasya + Tonya >= 2)
        {
            
        
        number+=1;
        }
        
    }
    cout << number << endl;
    return 0 ;
    
}