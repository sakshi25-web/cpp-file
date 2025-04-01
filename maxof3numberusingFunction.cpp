#include<iostream>
using namespace std;
void maxNumber(int num1,int num2,int num3){
    if(num1>=num2 && num1>=num3){
        cout<<"max number is :"<<num1<<endl;
    }
    else if(num2>=num1 && num2>=num3){
        cout<<"max number is:"<<num2<<endl;
    }
    else{
        cout<<"max number is:"<<num3;
    }
}//function declare
 int main(){
  
    maxNumber(7,8,6);//function call
    return 0;
}
