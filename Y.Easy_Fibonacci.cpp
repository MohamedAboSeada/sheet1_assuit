#include <iostream>
using namespace std;

void generateFib(int n){
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2;i<n;i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for(int i = 0;i<n;i++){
        cout<<fib[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int n;
    cin>>n;
    generateFib(n);
    return 0;
}