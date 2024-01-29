#include <iostream>
#define ll long long
using namespace std;


/**
 * @details
 * (1) if start of second interval between first interval
 *   (1) intersection will be start of second,end of first
 * (2) if end of second interval between first invertval
 *   (2) intersection will be start of first,end of second
 * (3) if both between first interval
 *   (3) if second first > first start && second end > first end
 *      intersection will be start of first,end of first
 *   else:
 *      intersection will be start of second,end of second 
 * (4) if there is no itersection 
 *      cout<< -1
*/
int main(){
    ll a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    // first condition
    if(b1 >= a1 && b1 <= a2 && b2 > a2){
        cout<<b1<<" "<<a2<<"\n";
    }
    else if(b2 >= a1 && b2 <= a2 && b1 < a1){
        cout<<a1<<" "<<b2<<"\n";
    }else if(b1 >= a1 && b2 <= a2){
        cout<<b1<<" "<<b2<<"\n";
    }else if(a1 >= b1 && a2 <= b2){
        cout<<a1<<" "<<a2<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    return 0;
}