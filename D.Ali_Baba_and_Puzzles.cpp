#include <iostream>
#define llt long long int
#define ll long long
using namespace std;

int main(){
    ll a,b,c;
    llt d;
    cin>>a>>b>>c>>d;
    bool found = false;
    char operators[3] = {'+','-','*'};
    for(int i = 0;i<3;i++){
        char op1 = operators[i];
        for(int j = 0;j<3;j++){
            char op2 = operators[j];
            if(!(op1 == op2)){
                if(op1 == '+' && op2 == '-'){
                    if((a + b - c) == d){
                        found = true;
                        break;
                    }
                }
                if(op1 == '+' && op2 == '*'){
                    if((a + b * c) == d){
                        found = true;
                        break;
                    }
                }
                if(op1 == '-' && op2 == '+'){
                    if((a - b + c) == d){
                        found = true;
                        break;
                    }
                }
                if(op1 == '-' && op2 == '*'){
                    if((a - b * c) == d){
                        found = true;
                        break;
                    }
                }
                if(op1 == '*' && op2 == '+'){
                    if((a * b + c) == d){
                        found = true;
                        break;
                    }
                }
                if(op1 == '*' && op2 == '-'){
                    if((a * b - c) == d){
                        found = true;
                        break;
                    }
                }
                
            }
        }
    }
    if(found){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}