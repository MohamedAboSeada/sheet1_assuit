#include <iostream>
using namespace std;

int main(){
	int n,m,sum;
	for(;;){
		sum = 0;
		cin>>n>>m;
		if(n <= 0 || m <= 0){
			break;
		}else{
			if(n > m){
				for(int i = m;i<=n;i++){
					cout<<i<<" ";
					sum += i;
				}
			}else{
				for(int i = n;i<=m;i++){
					cout<<i<<" ";
					sum += i;
				}
			}
			cout<<"sum ="<<sum<<"\n";
		}
	}
	return 0;
}