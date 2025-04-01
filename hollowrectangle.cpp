#include<iostream>
using namespace std;
int main(){
    for(int row =0;row<5;row=row+1)//outer loop
    {
        //inner loop
        for(int coloum=0;coloum<5;coloum=coloum+1){
            //if zeroth r last row,then print star
            if(row==0||row==4){
                cout<<"* ";
            }
            else{
                if(coloum==0||coloum==4){
                    cout<<"* ";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
        }
    }
