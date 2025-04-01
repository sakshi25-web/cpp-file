#include<iostream>
using namespace std;
int main(){
    for (int i = 0;i<4;i=i+1)//outer loop-->rows
    {
        for(int j=0;j<4;j=j+1)//inner loop -->column
        {
      cout<<"* "; 
    }
    cout<<endl;
    }
    return 0;
}


