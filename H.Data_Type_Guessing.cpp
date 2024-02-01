#include <iostream>
#define ll long long
#include <limits>
#define ld long double
using namespace std;

int main(){
    long double n = 0,k = 0,a = 0;
    cin>>n>>k>>a;
    long double result = (n * k) / a;
    long double fractionalPart = result - static_cast<ll>(result);
    
    if(fractionalPart != 0){
        cout<<"double\n";
    }else{
        if(result <= 2147483647 && result >= -2147483648){
            cout<<"int\n";
        }else{
            cout<<"long long\n";
        }
    }
    return 0;
}