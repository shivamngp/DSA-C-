#include <iostream>
using namespace std;

int main() {
  // initialise array
  int size;
  cin>>size;
  int arr[10];
  for (int i=0;i<size;i++){
    cin >> arr[i];
  }

  // initialise sum to zero
  int sum = 0;

  // for loop runs from 0 to size - 1
  for(int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }

  cout << "The sum of the elements in the array: " << sum;
}