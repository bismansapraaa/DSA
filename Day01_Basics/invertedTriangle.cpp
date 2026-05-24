#include<iostream>
using namespace std;
int main(){
    int x=4;
    int y=7;
for(int i=0;i<y;i++)
{
    cout<<"*";
    
}
cout<<endl;
for (int i = 0; i < x; i++)
{   
    for(int j=0;j<y;j++)
    {
        if(j==i || j==y-1-i)
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