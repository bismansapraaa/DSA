#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 9;
    for(int i=0;i<y;i++)
    { 
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(j==i || j==y-i-1)

            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}