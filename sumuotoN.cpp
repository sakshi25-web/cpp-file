#include<iostream>
using namespace std;
void sumuptoN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    } cout<<sum;

}//function declare
 int main(){
    sumuptoN(10);//function call
    return 0;
}
