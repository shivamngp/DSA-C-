#include<iostream>
using namespace std;
// function declare
 void pa(int z[], int s){
    cout<<"printing the array " <<endl << endl;
    for (int i=0;i<s;i++) {
        cout << z[i] << " ";
    }
    cout << "printing done " << endl;
 }
 void pc(char y[], char p){
    cout<<"printing the array " <<endl << endl;
    for (char i=0;i<p;i++) {
        cout << y[i] << " ";
    }
    cout << "printing done " << endl;
 }
int main()
{
int a[15]={1,5,6,7,9,4,5,48,789,111,108};
cout<<"value at 20st index "<<a[20] <<" very good" <<endl <<endl;
 
 int b[10]={1,2,5};
 cout<<"value at 6st index "<<b[6] <<" very good array" <<endl <<endl;

int c[15]={1,2,5,74};
int n=10;
pa(c,10);

int d[10]={0};
n=10;
pa(d,10);

int e[10]={1};
n=10;
pa(e,10);

char f[5]={'a','h','t','e','q'};
cout <<"the char array is " << f[2] <<endl;

char g[8]={'s','d','g','h','t','a','s','f'};
pc(f,10);
return 0;
}