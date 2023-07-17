#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value for table : ";
    cin>>n;
    for (int i = 1; i < 11; ++i)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
         
    
}