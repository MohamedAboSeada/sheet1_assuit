#include <iostream>
using namespace std;


int main(){
	char S;
	cin>>S;
	int N;
	cin>>N;
	int numbers[N];
	for(int i = 0;i<N;i++){
		int value;
		cin>>value;
		numbers[i] = value;
	}
	for(int i = 0;i<N;i++){
		for(int j = 0;j<numbers[i];j++){
			cout<<S;
		}
		cout<<"\n";
	}
	return 0;
}