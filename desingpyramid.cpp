#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int row=0;row<n;row=row+1){
        for(int coloum=0;coloum<n-row;coloum=coloum+1){
            cout<<"* ";
        }
       
    }
    for(int row=0;row<n;row++){//outer loop{
        // space
       for (int col=0;col<n-row-1;col++){
           cout<<" ";
       }
       for(int col=0;col<row+1;col++) {
           cout<<"* ";
       }
   }
   for(int row=0;row<n;row=row+1){
    for(int coloum=0;coloum<n-row;coloum=coloum+1){
        cout<<"* ";
    }
   
}
}