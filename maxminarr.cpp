#include<iostream>
using namespace std;
int getMin (int num[],int n){
    int min=INT8_MAX;
    for (int i=0;i<n;i++)
    {
        if(num[i]< min){
            min = num[i];
        }
    }
    return min;
 }

 int getMax (int num[],int n){
    int max=INT8_MIN;
    for (int i=0;i<n;i++)
    {
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
 }
int main()
{
 int s;
 cin>>s;
 int a[100];
 for(int i=0;i<s;i++){
    cin>>a[i];
 }
 cout<<"maximum value in array is " <<getMax(a,s)<<endl;
 cout<<"minimum value in array is " <<getMin(a,s)<<endl;
return 0;
}