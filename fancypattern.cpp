#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){//outer loop
       for(int col=0;col<2*row+1;col++){//inner loop
        if(col%2==1){//odd number coloumn
            cout<<"*";

        }
        else{//even number coloumn
            cout<<row+1;
        }
       } cout<<endl;
    }
}