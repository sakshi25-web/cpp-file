#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){//outer loop{
         // space
        for (int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //star
           for(int col=0;col<row+1;col++) {
            if(col==0||col==row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }}
        
        cout<<endl;
    }
}