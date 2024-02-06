#include <iostream>
using namespace std;


int main(){
	int y,flag = 0;
	cin>>y;
	for(int i = 1;i<=y;i++){
		if(i % 2 == 0){
			cout<<i<<"\n";
			flag += 1;
		}
	}	
	if(flag == 0) cout<< -1 <<"\n";

	return 0;
}