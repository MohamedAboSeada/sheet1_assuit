#include <iostream>
#include <string>
#define ll long long
using namespace std;

bool LuckyNumber(ll number){
	int count = 0;
	int length = 0;
	while(number > 0){
		int digit = number % 10;
		if(digit != 7 && digit != 4){
			count++;
		}
		length++;
		number /= 10;
	}
	if(count > 0){
		return false;
	}else{
		return true;
	}
}

int main(){
	ll a,b,count = 0;
	cin>>a>>b;
	for(ll i = a;i<=b;i++){
		if(LuckyNumber(i)){
			count++;
			cout<<i<<" ";
		}
	}
	(count == 0) ? cout << -1 <<"\n" : cout<<"\n" ;
	return 0;
}