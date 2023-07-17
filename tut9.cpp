#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   int age;
   cout<<"enter your age : "<<endl;
   cin>>age;
   //if (age=18)
   //{
   //   cout<<"you are a boy "<<endl;
   //}
   //else if (age==18)
   //{ 
   //    cout<<"you are a hero "<<endl;
   //}
   //else
   //{
   //    cout<<"you are an adult "<<endl;
   //}
    
       switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}