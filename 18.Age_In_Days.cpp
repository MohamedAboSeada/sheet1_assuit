#include <iostream>
using namespace std;

/**
 * @note
 * [output]
 * x years
 * x months
 * x days
*/
const int year_days = 365;
const int month_days = 30;
int main(){
    int age_in_days;
    cin>>age_in_days;
    int n_years = age_in_days / year_days;
    int remainder = age_in_days % year_days;
    int n_month = remainder / month_days;
    int days = remainder % month_days;
    cout<<n_years<<" years\n";
    cout<<n_month<<" months\n";
    cout<<days<<" days\n";
    return 0;
}