#include<iostream>
using namespace std;
int main(){
    int a= 10;
    float b=4.5;//float to int.
    float result=a+(int)b;
    cout<<result<<endl;
    double pi=3.14159264;//double to int
    int pi1 =(int)pi;
    cout<<pi1<<endl;
    float floatnumber =65.35;
    char chvalue = (char)floatnumber;//float to char
    cout<<chvalue<<endl;
    int c=17;
    int d=2.0;
    float e=(float(c)/d);
    cout<<e<<endl;
}