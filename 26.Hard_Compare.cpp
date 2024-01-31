#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d; 
    (b * log(a) > d * log(c)) ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}