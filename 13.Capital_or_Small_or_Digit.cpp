#include <iostream>
using namespace std;

int main(){
    char digit;
    cin>>digit;
    if ((int)digit >= 48 && (int)digit <= 57) {
        cout<<"IS DIGIT\n";
    } else if ((int)digit >= 65 && (int)digit <= 91) {
        cout<<"ALPHA\nIS CAPITAL\n";
    } else if ((int)digit >= 97 && (int)digit <= 123) {
        cout<<"ALPHA\nIS SMALL";
    }
    return 0;
}
