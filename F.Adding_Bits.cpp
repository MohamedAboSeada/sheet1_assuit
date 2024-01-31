#include <iostream>
#include <cmath>
#include <string>
#define ll long long

using namespace std;
class adder{
    int num1,num2;

public:
    adder(int a,int b){
        num1 = a;
        num2 = b;
    }

    // decimal to binary converter
    string dtob(int number){
        string binary = "";
        while (number > 0) {
            binary = to_string(number % 2) + binary;
            number /= 2;
        }

        while (binary.length() < 32) {
            binary = "0" + binary;
        }
        return binary;
    }

    // binary to decimal converter
    ll btod(int* numbers,int size){
        ll sum = 0;
        for(int i = size-1; i >= 0; i--){
            if(numbers[i] == 1){
                sum += pow(2, size - 1 - i);
            }
        }
        return sum;
    }

    // the adder using bitwise
    ll result(){
        string number1 = dtob(num1);
        string number2 = dtob(num2);
        int* numbers = new int[number1.size()];
        for(int i = number1.size()-1; i >= 0; i--){
            if((((int)number1[i]) - 48) == 1 && (((int)number2[i]) - 48) == 1){
                numbers[i] = 0;  
            }else{
                numbers[i] = (((int)number1[i]) - 48) | (((int)number2[i]) - 48);  
            }          
        }
        int size = number1.size();
        ll number = btod(numbers, size);
        return number; 
    }
};
int main(){
    ll a,b;
    cin>>a>>b;
    adder add(a,b);
    ll result = add.result();
    cout<<result<<endl;    
    return 0;
}