#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int row=0;row<n;row=row+1){
        for(int coloum=0;coloum<n-row;coloum=coloum+1){
            if(row== 0||row==n-1){
            cout<<"*";}
            else{
                if(coloum==0||coloum==n-row-1){
                cout<<"*";}
                else{
                    cout<<" ";
                }

            }
        }
        cout<<endl;
    }
}
