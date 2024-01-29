#include <iostream>
#include <cmath>
#define d double
using namespace std;

int main(){
    d A = 0,B = 0;
    cin>>A>>B;
    cout<<"floor "<<A<<" / "<<B<<" = "<<floor(A/B)<<endl;
    cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil(A/B)<<endl;
    cout<<"round "<<A<<" / "<<B<<" = "<<round(A/B)<<endl;
    return 0;
}