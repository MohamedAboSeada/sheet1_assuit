#include <iostream>
using namespace std;

int main(){
	int y,even = 0,odd = 0,pos = 0,neg = 0;
	cin>>y;
	for(int i = 0;i<y;i++){
		int value;
		cin>>value;
		if(value % 2 == 0){
			even += 1;
		}else{
			odd += 1;
		}

		if(value > 0){
			pos +=1;
		}else if(value < 0){
			neg += 1;
		}
	}
	cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<pos<<"\nNegative: "<<neg<<"\n"; 	
	return 0;
}