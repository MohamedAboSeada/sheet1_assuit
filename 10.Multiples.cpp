#include <iostream>
#define ll long long 
using namespace std;

int main(){
    ll A = 0,B = 0;
    cin>>A>>B;
    (A % B == 0 || B % A == 0) ? cout<<"Multiples\n" : cout<<"No Multiples\n"; 
    return 0;
}