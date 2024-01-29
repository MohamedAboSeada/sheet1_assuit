#include <iostream>
using namespace std;

int main(){
    char digit;
    cin>>digit;
    if((int)digit >= 65 && (int)digit <= 90){
        digit = (char)((int)digit + 32);
    }else if((int)digit >= 97 && (int)digit <= 122){
        digit = (char)((int)digit - 32);
    }
    cout<<digit<<"\n";
    return 0;
}