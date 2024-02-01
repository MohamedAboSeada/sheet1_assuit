#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll a,b,sum = 0,diff = 0;
    cin>>a>>b;
    sum = a + b;
    diff = (a > b) ? a - b : b - a;
    if(!(sum == 0)){
        if(sum % 2 == 0 && a == b){
            cout<<"YES\n";
        }else if((sum % 2 != 0) && ((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0)) && (diff == 1)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }

    return 0;
}