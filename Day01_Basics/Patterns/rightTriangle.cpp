#include<iostream>
using namespace std;
int main(){
    int x;
     cin>> x;
    for( int i=0; i<x-1; i++)
    {        
        cout<<"*";
       
        for(int j=1;j<x-1;j++)
        {
            if( i==j)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        
         cout<<endl;
    
    }
    for(int i=0;i<x;i++){
        cout<<"*";
    }

    return 0;
}