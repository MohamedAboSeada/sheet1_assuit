#include <iostream>
using namespace std;

int main(){
    char alpha;
    cin>>alpha;
    if((int)alpha + 1 > 122){
        cout<<'a'<<endl;
    }else{
        cout<<(char)((int)alpha + 1)<<endl;
    }
    return 0;
}