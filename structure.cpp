#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int age ;
    string first_name;
    string last_name;
    int standard;
    
    
};

int main() {
  struct student A;
  cin>>A.age;
  cin>>A.first_name;
  cin>>A.last_name;
  cin>>A.standard;
  cout<<A.age<<" ";
  cout<<A.first_name<<" ";
  cout<<A.last_name<<" ";
  cout<<A.standard<<" ";
    return 0;
}