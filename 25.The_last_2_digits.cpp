#include <iostream>
#include <iomanip> // Include the <iomanip> library for setw and setfill
#define ll long long
using namespace std;

// modular arthmatic 
// (a x b) mod m = ((a mod m) x (b mod m)) mod m
// (a x b x c x d) mod m <=> ((a mod m) x (b mod m) x (c mod m) x (d mod m)) x mod m

int main(){ 
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    int m = 100,last_2_digits = 0;
    last_2_digits = ((a % m) * (b % m) * (c % m) * (d % m)) % m;
    cout << setw(2) << setfill('0') << last_2_digits << endl;
    return 0;
}