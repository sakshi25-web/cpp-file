#include<iostream>
using namespace std;
void fareniheitIntoCelcius(int F){
cout<<"the conversion of farenheit into celcius is: "<<(F-32)*(5.0/9.0);
}//function defined
 int main(){
    fareniheitIntoCelcius(100);//function call
    return 0;
}
