#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
    ll a,b;
    char S;
    cin>>a>>S>>b;
    switch (S)
    {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
    }
    return 0;
}