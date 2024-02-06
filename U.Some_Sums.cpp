#include <iostream>
using namespace std;

bool IsBetween(int Number,int A,int B){
	int sum = 0;
	while(Number > 0){
		int digit = Number % 10;
		sum += digit;
		Number /= 10;
	}
	if(A > B){
		if(sum >= B && sum <= A){
			return true;
		}
	}else{
		if(sum >= A && sum <= B){
			return true;
		}
	}
	return false;
}
int main(){
	int N,A,B;
	cin>>N>>A>>B;
	int sum = 0;
	for(int i = 1;i<=N;i++){
		if(IsBetween(i,A,B)){
			sum += i;
		}
	}
	cout<<sum<<"\n";
	return 0;
}