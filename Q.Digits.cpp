#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	string TEST[T],reversed;
	for(int i = 0;i<T;i++){
		string value;
		cin>>value;
		TEST[i] = value;
	}	
	for(int i = 0;i<T;i++){
		reversed.clear();
		for(int j = TEST[i].length()-1;j>=0;j--){
			reversed += TEST[i][j];
		}
		for(int k = 0;k<reversed.length();k++){
			cout<<reversed[k]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}