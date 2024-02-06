#include <iostream>
#include <cmath>
using namespace std;

int DecimalToBinaryAndCount(int DecimalNumber){
	string BinaryRepresent = "";
	int onesNumber = 0;
	while(DecimalNumber > 0){
		int reminder = DecimalNumber % 2;
		if(reminder == 1){
			BinaryRepresent += '1';
			DecimalNumber -= 1;
			DecimalNumber /= 2;
		}else{
			BinaryRepresent += '0';
			DecimalNumber /= 2;
		}
	}
	for(int i = 0;i<BinaryRepresent.length();i++){
		if(BinaryRepresent[i] == '1'){
			onesNumber++;
		}
	}
	int AKADecimalRepresentOfOnesAgain = 0;
	for(int i = 0;i<onesNumber;i++){
		AKADecimalRepresentOfOnesAgain+=(pow(2,i));
	}
	return AKADecimalRepresentOfOnesAgain;
}

int main(){
	int N;
	int value;
	cin>>N;
	for(int i = 0;i<N;i++){
		cin>>value;
		cout<<DecimalToBinaryAndCount(value)<<"\n";
	}
	return 0;
}