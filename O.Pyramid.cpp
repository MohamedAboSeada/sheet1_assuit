#include <iostream>
using namespace std;

void draw_triangle(int n,char sympol){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			cout<<sympol;
		}
		cout<<endl;
	}
}
void draw_triangle_reversed(int n,char sympol){
	for(int i = 0;i<n;i++){
		for(int j = n-1;j>i;j--){
			cout<<" ";
		}
		for(int j = 0;j<=i;j++){
			cout<<sympol;
		}
		cout<<endl;
	}
}
void draw_triangle_full(int n,char s){
	for(int i = 0;i<n;i++){
		for(int j = n-1;j>i;j--){
			cout<<" ";
		}
		for(int j = 0;j<=i;j++){
			cout<<s;
		}
		for(int j = 0;j<i;j++){
			cout<<s;
		}
		cout<<endl;
	}
}
int main(){
	int n;
	char s;
	cin>>n>>s;
	// draw_triangle(n,s);
	// draw_triangle_reversed(n,s);
	draw_triangle_full(n,s);
	return 0;
}