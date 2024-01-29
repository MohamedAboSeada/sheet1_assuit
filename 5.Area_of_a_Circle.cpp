#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.141592653;

int main(){
    double R;
    cin>>R;
    cout<< fixed << setprecision(9) << PI * R * R << endl;
    return 0;

}