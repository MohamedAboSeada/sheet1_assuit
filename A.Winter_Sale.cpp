#include <iostream>
#define ll long long
using namespace std;

// P = MainPrice - (MainPrice * (Discount_Percent / 100))
// P = MainPrice(1 - (Discount_percent / 100))
// MainPrice = p / (1 - (Discounr_Percent / 100))
int main(){
    double discount_percent,price_after_dicount;
    cin>>discount_percent>>price_after_dicount;
    cout<<price_after_dicount / (1 - (discount_percent / 100))<<endl;
    return 0;
}