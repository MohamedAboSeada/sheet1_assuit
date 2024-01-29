#include <iostream>
using namespace std;

int main(){
    long a = 0,b = 0,c = 0;
    char s,eq;
    cin>>a>>s>>b>>eq>>c;
    switch (s)
    {
        case '+':
            (a+b == c) ? cout<<"Yes\n" : cout<<a+b<<endl;
            break;
        case '-':
            (a-b == c) ? cout<<"Yes\n" : cout<<a-b<<endl;
            break;
        case '*':
            (a*b == c) ? cout<<"Yes\n" : cout<<a*b<<endl;
            break;
    }
    return 0;
}