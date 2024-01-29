#include <iostream>
using namespace std;


int main(){
    int a,c;
    char s;
    cin>>a>>s>>c;
    switch (s)
    {
        case '>':
            (a > c)? cout<<"Right\n" : cout<<"Wrong\n";
            break;
        case '<':
            (a < c)? cout<<"Right\n" : cout<<"Wrong\n";
            break;
        case '=':
            (a == c)? cout<<"Right\n" : cout<<"Wrong\n";
            break;
    }

    return 0;
}