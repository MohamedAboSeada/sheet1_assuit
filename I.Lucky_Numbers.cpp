#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string number = to_string(n);
    // extract numbers
    int n1 = (int)number[0] - 48;
    int n2 = (int)number[1] - 48;

    if(!(n < 10 || n >= 100)){
        if((n1 != 0 && n2 % n1 == 0) || (n2 != 0 && n1 % n2 == 0)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }
    return 0;
}