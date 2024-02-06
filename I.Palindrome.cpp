#include <iostream>
#include <string>
using namespace std;

int main(){
	string number;
	cin>>number;
	string reversed;
	for(int i = number.length()-1;i>=0;i--){
		reversed += number[i];
	}
	if(reversed == number){
		cout<<reversed<<"\n"<<"YES\n";
	}else{
		int reversedAsaNumber = stoi(reversed);
		cout<<reversedAsaNumber<<"\n"<<"NO\n";
	}

	return 0;
}