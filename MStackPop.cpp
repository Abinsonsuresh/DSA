
#include <iostream>
using namespace std;
int stack[10], n=5, top1 = -1, top2= n;
void push1(int val){
  if(top1 < top2-1)
  {
    top1++;
    stack[top1] = val;
  }
  else{
    cout<<"Stack is full";
  }
}

void push2(int val){
  if(top1 < top2-1)
  {
    top2--;
    stack[top2] = val;
  }
  else{
    cout<<"Stack is full";

  }
}

void display1(int arr[]){
  for (int i = top1; i >= 0; i--) 
    {
      cout<<arr[i];
    }
  cout<<"\n";
}


void display2(int arr[]){
  for (int i = top2; i < n; i++) 
    {
      cout<<arr[i]<<" ";
    }
  cout<<"\n";
}

void display(int arr[]){
  for (int i = 0; i < 5; i++) 
    {
      cout<<arr[i]<<" ";
    }
  cout<<"\n";
}

void pop1(){
  if(top1 >= 0)
  {
    cout<<" \nRemoved element "<<stack[top1];
    top1--;
  }
  else{
    cout<<"Stack Empty";
  }
}

void pop2(){
  if(top2 < n)
  {
    cout<<" \nRemoved element "<<stack[top2];
    top2++;
    //bcz LIFO
  }
  else{
    cout<<"Stack Empty";
  }
}
int main() {
  push1(34); 
  push1(39);

  push2(5);
  push2(7);


  display(stack);


  cout<<"\n Top1";
  display1(stack);

  pop1();

  cout<<"\n Top2";

  display2(stack);

  pop2();

}