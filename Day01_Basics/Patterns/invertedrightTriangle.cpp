#include<iostream>
using namespace std;
int main()
{
     int n = 5;
    for(int i =0;i<n;i++)
    {
        cout<<"*";
    }
        cout<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<"*";
        
        for(int j=1; j<n;j++)
        {
            if(j==n-i-1)
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
    return 0;
}