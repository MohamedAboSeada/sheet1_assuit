#include <iostream>
using namespace std;


int main(){
	int number;
	cin>>number;
	int flag = 0;
	if(number == 1){
		cout<<"NO\n";
	}else{
		for(int i = 1;i<=number;i++){
			if(number % i == 0){
				flag += 1;
			}
		}
		if(flag == 2){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}