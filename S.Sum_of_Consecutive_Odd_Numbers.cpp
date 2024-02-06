#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	int sums[T];
	// intilize sums elements
	for(int i = 0;i<T;i++){
		sums[i] = 0;
	}
	for(int i = 0;i<T;i++){
		int A,B,sum = 0;
		cin>>A>>B;
		if(A < B){
			for(int j = A+1;j<B;j++){
				if(j % 2 != 0){
					sum+=j;
				}
			}
		}else{
			for(int j = B+1;j<A;j++){
				if(j % 2 != 0){
					sum+=j;
				}
			}
		}
		sums[i] = sum;
	}
	for(int i = 0;i<T;i++){
		cout<<sums[i]<<"\n";
	}

	return 0;
}