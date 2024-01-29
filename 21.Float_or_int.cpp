#include <iostream>
using namespace std;


int main(){
    double n;
    cin>>n;
    int integerPart = static_cast<int>(n);
    double fractionalPart = n - integerPart;
    (fractionalPart == 0) ? cout<<"int "<<integerPart<<endl : cout<<"float "<<integerPart<<" "<<fractionalPart<<endl; 
    return 0;
}