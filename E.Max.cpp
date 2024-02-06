#include <iostream>
using namespace std;

int main(){
	int y = 0;
	long long max = 0;
	cin>>y;
	long long number[y];
	for(int i = 0;i<y;i++){
		long long value;
		cin>>value;
		number[i] = value;
	}
	max = number[0];
	for(int i = 1;i<y;i++){
		if(max < number[i]){
			max = number[i];
		}
	}
	cout<<max<<"\n";
	return 0;
}