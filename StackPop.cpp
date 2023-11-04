
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

void pop(){
  if(top<= -1)
  {
    cout<<"\n StackUnderFlow";
  }
  else{
    cout<<"\n The popped element is :"<<stack[top];
    top--;
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
  display(stack, top);

  pop();
  cout<<"\nAfter POP";
  display(stack, top);
}