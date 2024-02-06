#include <iostream>
using namespace std;

unsigned long long factorial(unsigned int n) {
    if (n < 2) {
        return 1;
    }
    else {
        unsigned long long result = 1;
        for (unsigned int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

int main(){
	int t,value;
	cin>>t;
	int numbers[t];
	for(int i = 0;i<t;i++){
		cin>>value;
		numbers[i] = value;
	}
	for(int i = 0;i<t;i++){
		cout<<factorial(numbers[i])<<"\n";
	}
	return 0;
}