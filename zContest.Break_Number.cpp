#include <iostream>
#define llt long long int
using namespace std;

// this function work log(n)
int f(llt x){
    llt div_num = 0;
    while(x % 2 == 0){
        div_num++;
        x /= 2;
    }
    return div_num;
}
int main(){
    int t = 0,last_n_div = 0;
    cin>>t;
    for(int i = 0;i<t;i++){
        llt number = 0;
        cin>>number;
        if(f(number) > last_n_div)
            last_n_div = f(number); 
    }
    cout<<last_n_div<<"\n";
    return 0;
}