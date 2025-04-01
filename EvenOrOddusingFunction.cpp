#include<iostream>
using namespace std;
void primeornot(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd";
    }
}//function declare
 int main(){
    primeornot(9);//function call
    return 0;
}
