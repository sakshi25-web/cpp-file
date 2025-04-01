#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row=row+1){
       for(int colum=0;colum<row+1;colum=colum+1){
       cout<<"* ";
    }
    cout<<endl;
    }

}