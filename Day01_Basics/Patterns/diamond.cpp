#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     if(n%2==0)
     {
        cout<<"error";
     }
     else
     {
     

    for (int i=0;i<(n+1)/2;i++)
    {
        for(int j=0;j<((n-1)/2)-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<(2*i)+1;k++)
        {
            if(k%2)
            {
            cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl; 
    } 
    for (int i=(n+1)/2;i<n;i++)
    {
        for(int j=0;j<i-((n-1)/2);j++)
        {
            cout<<" ";
        }
        for(int k=0;k<(2*(n-i))-1;k++)
        {
            if(k%2)
            {
            cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
        
    } 
}
    return 0;
}
   
    