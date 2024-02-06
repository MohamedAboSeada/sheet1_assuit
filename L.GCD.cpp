#include <iostream>
using namespace std;

int main(){
	int b,d,GCD;
	cin>>b>>d;
	for(int i = 1;i<=d;i++){
		if(b % i == 0 && d % i == 0){
			GCD = i;
		}
	}
	cout<<GCD<<"\n";
	return 0;
}