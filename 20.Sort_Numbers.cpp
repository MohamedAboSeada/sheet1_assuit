#include <iostream>

void swap(int& n1,int& n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){
    int a = 0,b = 0,c = 0,t1 = 0,t2 = 0,t3 = 0;
    std::cin>>a>>b>>c;
    t1 = a,t2 = b,t3 = c;
    if(a > b){
        swap(a,b);
        if(b > c){
            swap(b,c);
            if(a > b){
                swap(a,b);
            }
        }
    }else{
        if(b > c){
            swap(b,c);
            if(a > b){
                swap(a,b);
            }
        }
    }
    
    std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    std::cout<<std::endl;
    std::cout<<t1<<"\n"<<t2<<"\n"<<t3<<"\n";
    return 0;
}