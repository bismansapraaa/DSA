#include<iostream>
using namespace std;
int main()

{

   int x;
   cin>>x;
   int y=(2*x)-1;
   int a=1;
   for(int i=0;i<x;i++)
   {
        for(int j=0; j<x-a; j++)
            {
                cout<<" ";
            }
        for(int k=0;k<2*i+1;k++)
            {
                cout<<"*";
            }
        for(int j=0; j<x-a; j++)
            {
                cout<<" ";
            }
        cout<<endl;
        a++;
    
         
    } 
     
    return 0;

}