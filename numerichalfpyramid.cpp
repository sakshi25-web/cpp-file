#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int coloumn=0;coloumn<row+1;coloumn++){
            cout<< coloumn + 1<<" " ;
        }
        cout<<endl;
    }
}