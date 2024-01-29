#include <iostream>
using namespace std;

int main(){
    string number;
    cin>>number;
    int first_digit = (int)number[0] - 48;
    (first_digit % 2 == 0) ? cout<<"EVEN\n" : cout<<"ODD\n";
    return 0;
}