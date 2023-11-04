
#include <iostream>
using namespace std;
int stack[10], n=5, top = -1;
void push(int val){
  if(top >=n-1)
  {
    cout<<"StackOverflow";
  }
  else{
    top++;
    stack[top] = val;
  }
}

void display(int arr[], int n){
  for(int i=0; i<top +1 ; i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<"\n";
}
int main() {
  int val;
  cout<<"Enter the value \n";
  cin>> val;
  push(val);

  cout<<"Enter the value \n";
  cin>> val;
  push(val);
  // cout<<top;
  display(stack, top);
}