#include<iostream>
using namespace std;
int main(){
    int x ;
    cin >> x;
    int y = 2*x-1;
    for(int i=0; i<x-1;i++)
    {
        for(int j=0; j<y;j++)
        {
            if(j==y-x+i || j==y-x-i)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
   for(int i=0; i<y;i++)
   {
    cout<<"*";
   }
    return 0;
}